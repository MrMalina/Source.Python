/**
* =============================================================================
* Source Python
* Copyright (C) 2012-2015 Source Python Development Team.  All rights reserved.
* =============================================================================
*
* This program is free software; you can redistribute it and/or modify it under
* the terms of the GNU General Public License, version 3.0, as published by the
* Free Software Foundation.
*
* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
* FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
* details.
*
* You should have received a copy of the GNU General Public License along with
* this program.  If not, see <http://www.gnu.org/licenses/>.
*
* As a special exception, the Source Python Team gives you permission
* to link the code of this program (as well as its derivative works) to
* "Half-Life 2," the "Source Engine," and any Game MODs that run on software
* by the Valve Corporation.  You must obey the GNU General Public License in
* all respects for all other code used.  Additionally, the Source.Python
* Development Team grants this exception to all derivative works.
*/

#ifndef _MEMORY_ALLOC_H
#define _MEMORY_ALLOC_H

// ============================================================================
// >> INCLUDES
// ============================================================================
#include <malloc.h>
#include "memalloc.h"


// ============================================================================
// >> UTIL_GetMemSize
// ============================================================================
inline size_t UTIL_GetMemSize(void* ptr)
{
#ifdef _WIN32
	return g_pMemAlloc->GetSize(ptr);
#elif defined(__linux__)
	return malloc_usable_size(ptr);
#else
	#error "Unsupported platform."
#endif
}


// ============================================================================
// >> UTIL_Alloc
// ============================================================================
inline void* UTIL_Alloc(size_t size)
{
	void* pPtr = NULL;
#ifdef _WIN32
	pPtr = g_pMemAlloc->IndirectAlloc(size);
#elif defined(__linux__)
	pPtr = malloc(size);
#else
	#error "Unsupported platform."
#endif
	memset(pPtr, 0, size);
	return pPtr;
}


// ============================================================================
// >> UTIL_Realloc
// ============================================================================
inline void* UTIL_Realloc(void* ptr, size_t size)
{
	void* pPtr = NULL;
#ifdef _WIN32
	pPtr = g_pMemAlloc->Realloc(ptr, size);
#elif defined(__linux__)
	pPtr = realloc(ptr, size);
#else
	#error "Unsupported platform."
#endif
	return pPtr;
}


// ============================================================================
// >> UTIL_Dealloc
// ============================================================================
inline void UTIL_Dealloc(void* ptr)
{
#ifdef _WIN32
	g_pMemAlloc->Free(ptr);
#elif defined(__linux__)
	free(ptr);
#else
	#error "Unsupported platform."
#endif
}

#endif // _MEMORY_ALLOC_H