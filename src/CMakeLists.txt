# ------------------------------------------------------------------
# Set minimum required version of CMake
# ------------------------------------------------------------------
CMake_Minimum_Required(VERSION 2.8)

# ------------------------------------------------------------------
# Makefile includes.
# ------------------------------------------------------------------
include("makefiles/sdk/${SDK}.cmake")
include("makefiles/shared.cmake")

# ------------------------------------------------------------------
# Loader
# ------------------------------------------------------------------
Set(SOURCEPYTHON_LOADER_HEADERS
    loader/loader_main.h
)

Set(SOURCEPYTHON_LOADER_SOURCES
    loader/loader_main.cpp
)

Set(SOURCEPYTHON_LOADER_FILES
    ${SOURCEPYTHON_LOADER_HEADERS}
    ${SOURCEPYTHON_LOADER_SOURCES}
)

# ------------------------------------------------------------------
# Utility
# ------------------------------------------------------------------
Set(SOURCEPYTHON_UTIL_HEADERS
    core/utility/sp_util.h
    core/utility/call_python.h
    core/utility/wrap_macros.h
    core/utility/ipythongenerator.h
)

Set(SOURCEPYTHON_UTIL_SOURCES
    core/utility/patches/${SOURCE_ENGINE}/patches.cpp
)

Set(SOURCEPYTHON_UTIL_FILES
    ${SOURCEPYTHON_UTIL_HEADERS}
    ${SOURCEPYTHON_UTIL_SOURCES}
)

# ------------------------------------------------------------------
# Core
# ------------------------------------------------------------------
Set(SOURCEPYTHON_CORE_HEADERS 
    core/core/sp_python.h
    core/core/sp_main.h
    core/core/sp_gamedir.h
)

Set(SOURCEPYTHON_CORE_SOURCES
    core/core/sp_python.cpp
    core/core/sp_main.cpp
    core/core/sp_gamedir.cpp
)

Set(SOURCEPYTHON_CORE_FILES
    ${SOURCEPYTHON_CORE_HEADERS}
    ${SOURCEPYTHON_CORE_SOURCES}
)

# ------------------------------------------------------------------
# Addon system
# ------------------------------------------------------------------
Set(SOURCEPYTHON_ADDON_HEADERS
    core/addons/sp_addon.h
)

Set(SOURCEPYTHON_ADDON_SOURCES
    core/addons/sp_addon.cpp
)

Set(SOURCEPYTHON_ADDON_FILES
    ${SOURCEPYTHON_ADDON_HEADERS}
    ${SOURCEPYTHON_ADDON_SOURCES}
)

# ------------------------------------------------------------------
# Generic plugin stuff.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_GENERIC_HEADERS
    core/modules/export_main.h
)

Set(SOURCEPYTHON_GENERIC_SOURCES
    core/modules/export_main.cpp
)

Set(SOURCEPYTHON_GENERIC_FILES
    ${SOURCEPYTHON_GENERIC_HEADERS}
    ${SOURCEPYTHON_GENERIC_SOURCES}
)

# ------------------------------------------------------------------
# Bot module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_BOT_MODULE_HEADERS
)

Set(SOURCEPYTHON_BOT_MODULE_SOURCES
    core/modules/bot/bot_wrap_python.cpp
)

# ------------------------------------------------------------------
# Command module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_COMMAND_MODULE_HEADERS
    core/modules/command/client_command_wrap.h
    core/modules/command/command_wrap.h
    core/modules/command/say_command_wrap.h
    core/modules/command/server_command_wrap.h
)

Set(SOURCEPYTHON_COMMAND_MODULE_SOURCES
    core/modules/command/client_command_wrap.cpp
    core/modules/command/command_wrap_python.cpp
    core/modules/command/say_command_wrap.cpp
    core/modules/command/server_command_wrap.cpp
)

# ------------------------------------------------------------------
# Conversions module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_CONVERSIONS_MODULE_HEADERS
    core/modules/conversions/conversions_wrap.h
)

Set(SOURCEPYTHON_CONVERSIONS_MODULE_SOURCES
    core/modules/conversions/conversions_wrap_python.cpp
)

# ------------------------------------------------------------------
# Cvar module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_CVAR_MODULE_HEADERS
)

Set(SOURCEPYTHON_CVAR_MODULE_SOURCES
    core/modules/cvar/cvar_wrap_python.cpp
)

# ------------------------------------------------------------------
# Dump module
# ------------------------------------------------------------------
Set(SOURCEPYTHON_DUMP_MODULE_HEADERS
    core/modules/dump/dump_functions.h
)

Set(SOURCEPYTHON_DUMP_MODULE_SOURCES
    core/modules/dump/dump_wrap_python.cpp
)

# ------------------------------------------------------------------
# Effects module
# ------------------------------------------------------------------
Set(SOURCEPYTHON_EFFECTS_MODULE_HEADERS
)

Set(SOURCEPYTHON_EFFECTS_MODULE_SOURCES
    core/modules/effects/effects_wrap_python.cpp
)

# ------------------------------------------------------------------
# Engine module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_ENGINE_MODULE_HEADERS
    core/modules/engine/${SOURCE_ENGINE}/engine_wrap_python.h
)

Set(SOURCEPYTHON_ENGINE_MODULE_SOURCES
    core/modules/engine/engine_wrap_python.cpp
)

# ------------------------------------------------------------------
# Entity module
# ------------------------------------------------------------------
Set(SOURCEPYTHON_ENTITY_MODULE_HEADERS
    core/modules/entity/entity_wrap.h
    core/modules/entity/entity_props.h
    core/modules/entity/entity_generator_wrap.h
)

Set(SOURCEPYTHON_ENTITY_MODULE_SOURCES
    core/modules/entity/entity_props.cpp
    core/modules/entity/entity_wrap.cpp
    core/modules/entity/entity_wrap_python.cpp
    core/modules/entity/entity_generator_wrap.cpp
)

# ------------------------------------------------------------------
# Event module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_EVENT_MODULE_HEADERS
)

Set(SOURCEPYTHON_EVENT_MODULE_SOURCES
    core/modules/event/event_wrap_python.cpp
)

# ------------------------------------------------------------------
# Globals module
# ------------------------------------------------------------------
Set(SOURCEPYTHON_GLOBALS_MODULE_HEADERS
    core/modules/globals/${SOURCE_ENGINE}/globals_wrap_python.h
)

Set(SOURCEPYTHON_GLOBALS_MODULE_SOURCES
    core/modules/globals/globals_wrap_python.cpp
)

# ------------------------------------------------------------------
# Keyvalues module
# ------------------------------------------------------------------
Set(SOURCEPYTHON_KEYVALUES_MODULE_HEADERS
)

Set(SOURCEPYTHON_KEYVALUES_MODULE_SOURCES
    core/modules/keyvalues/keyvalues_wrap_python.cpp
    ${SOURCESDK}/tier1/KeyValues.cpp
)

# ------------------------------------------------------------------
# Listener module
# ------------------------------------------------------------------
Set(SOURCEPYTHON_LISTENERS_MODULE_HEADERS
    core/modules/listener/listenermanager.h
)

Set(SOURCEPYTHON_LISTENERS_MODULE_SOURCES
    core/modules/listener/listenermanager.cpp
    core/modules/listener/listener_wrap_python.cpp
)

# ------------------------------------------------------------------
# Mathlib module
# ------------------------------------------------------------------
Set(SOURCEPYTHON_MATHLIB_MODULE_HEADERS
)

Set(SOURCEPYTHON_MATHLIB_MODULE_SOURCES
    core/modules/mathlib/mathlib_wrap_python.cpp
)

# ------------------------------------------------------------------
# Memory module
# ------------------------------------------------------------------
Set(SOURCEPYTHON_MEMORY_MODULE_HEADERS
    core/modules/memory/memory_tools.h
    core/modules/memory/memory_scanner.h
    core/modules/memory/memory_hooks.h
    core/modules/memory/memory_callback.h
)

Set(SOURCEPYTHON_MEMORY_MODULE_SOURCES
    core/modules/memory/memory_scanner.cpp
    core/modules/memory/memory_tools.cpp
    core/modules/memory/memory_hooks.cpp
    core/modules/memory/memory_callback.cpp
    core/modules/memory/memory_wrap_python.cpp
)

# ------------------------------------------------------------------
# Players module
# ------------------------------------------------------------------
Set(SOURCEPYTHON_PLAYERS_MODULE_HEADERS
    core/modules/player/player_generator_wrap.h
)

Set(SOURCEPYTHON_PLAYERS_MODULE_SOURCES
    core/modules/player/player_wrap_python.cpp
    core/modules/player/player_generator_wrap.cpp
)

# ------------------------------------------------------------------
# RecipientFilter module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_RECIPIENTFILTER_MODULE_HEADERS
    core/modules/recipientfilter/mrecipientfilter.h
)

Set(SOURCEPYTHON_RECIPIENTFILTER_MODULE_SOURCES
    core/modules/recipientfilter/mrecipientfilter.cpp
    core/modules/recipientfilter/recipientfilter_wrap_python.cpp
)

# ------------------------------------------------------------------
# Usermessage module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_USERMESSAGE_MODULE_HEADERS
    core/modules/usermessage/usermessage.h
    core/modules/usermessage/usermessage_implementation_base.h
    core/modules/usermessage/${SOURCE_ENGINE}/usermessage_implementation.h
)

Set(SOURCEPYTHON_USERMESSAGE_MODULE_SOURCES
    core/modules/usermessage/usermessage.cpp
    core/modules/usermessage/usermessage_wrap_python.cpp
    core/modules/usermessage/usermessage_implementation_base.cpp
    core/modules/usermessage/${SOURCE_ENGINE}/usermessage_implementation.cpp
)

# ------------------------------------------------------------------
# StringTables module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_STRINGTABLES_MODULE_HEADERS
)

Set(SOURCEPYTHON_STRINGTABLES_MODULE_SOURCES
    core/modules/stringtables/stringtables_wrap_python.cpp
)

# ------------------------------------------------------------------
# Datamap module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_DATAMAP_MODULE_HEADERS
	core/modules/datamap/datamap_wrap.h
	core/modules/datamap/${SOURCE_ENGINE}/datamap_wrap_python.h
)

Set(SOURCEPYTHON_DATAMAP_MODULE_SOURCES
    core/modules/datamap/datamap_wrap_python.cpp
)

# ------------------------------------------------------------------
# All module source files
# ------------------------------------------------------------------
Set(SOURCEPYTHON_MODULE_FILES
    ${SOURCEPYTHON_BOT_MODULE_HEADERS}
    ${SOURCEPYTHON_BOT_MODULE_SOURCES}
    
    ${SOURCEPYTHON_COMMAND_MODULE_HEADERS}
    ${SOURCEPYTHON_COMMAND_MODULE_SOURCES}

    ${SOURCEPYTHON_CONVERSIONS_MODULE_HEADERS}
    ${SOURCEPYTHON_CONVERSIONS_MODULE_SOURCES}

    ${SOURCEPYTHON_CVAR_MODULE_HEADERS}
    ${SOURCEPYTHON_CVAR_MODULE_SOURCES}

    ${SOURCEPYTHON_DUMP_MODULE_HEADERS}
    ${SOURCEPYTHON_DUMP_MODULE_SOURCES}

    ${SOURCEPYTHON_EFFECTS_MODULE_HEADERS}
    ${SOURCEPYTHON_EFFECTS_MODULE_SOURCES}

    ${SOURCEPYTHON_ENGINE_MODULE_HEADERS}
    ${SOURCEPYTHON_ENGINE_MODULE_SOURCES}

    ${SOURCEPYTHON_ENTITY_MODULE_HEADERS}
    ${SOURCEPYTHON_ENTITY_MODULE_SOURCES}

    ${SOURCEPYTHON_EVENT_MODULE_HEADERS}
    ${SOURCEPYTHON_EVENT_MODULE_SOURCES}

    ${SOURCEPYTHON_GLOBALS_MODULE_HEADERS}
    ${SOURCEPYTHON_GLOBALS_MODULE_SOURCES}

    ${SOURCEPYTHON_KEYVALUES_MODULE_HEADERS}
    ${SOURCEPYTHON_KEYVALUES_MODULE_SOURCES}

    ${SOURCEPYTHON_LISTENERS_MODULE_HEADERS}
    ${SOURCEPYTHON_LISTENERS_MODULE_SOURCES}

    ${SOURCEPYTHON_MATHLIB_MODULE_HEADERS}
    ${SOURCEPYTHON_MATHLIB_MODULE_SOURCES}

    ${SOURCEPYTHON_MEMORY_MODULE_HEADERS}
    ${SOURCEPYTHON_MEMORY_MODULE_SOURCES}

    ${SOURCEPYTHON_PLAYERS_MODULE_HEADERS}
    ${SOURCEPYTHON_PLAYERS_MODULE_SOURCES}

    ${SOURCEPYTHON_RECIPIENTFILTER_MODULE_HEADERS}
    ${SOURCEPYTHON_RECIPIENTFILTER_MODULE_SOURCES}

    ${SOURCEPYTHON_USERMESSAGE_MODULE_HEADERS}
    ${SOURCEPYTHON_USERMESSAGE_MODULE_SOURCES}
    ${SOURCEPYTHON_MODULE_USERMESSAGES_GAME_SOURCES}

	${SOURCEPYTHON_STRINGTABLES_MODULE_HEADERS}
	${SOURCEPYTHON_STRINGTABLES_MODULE_SOURCES}

	${SOURCEPYTHON_DATAMAP_MODULE_HEADERS}
	${SOURCEPYTHON_DATAMAP_MODULE_SOURCES}
)

# ------------------------------------------------------------------
# Create source groups for everything to make our projects nice and 
# clean.
# ------------------------------------------------------------------
Source_Group("Header Files\\Addons"                         FILES ${SOURCEPYTHON_ADDON_HEADERS})
Source_Group("Header Files\\Core"                           FILES ${SOURCEPYTHON_CORE_HEADERS})
Source_Group("Header Files\\Util"                           FILES ${SOURCEPYTHON_UTIL_HEADERS})
Source_Group("Header Files\\Generic"                        FILES ${SOURCEPYTHON_GENERIC_HEADERS})
Source_Group("Header Files\\Module\\Bot"                    FILES ${SOURCEPYTHON_BOT_MODULE_HEADERS})
Source_Group("Header Files\\Module\\Command"                FILES ${SOURCEPYTHON_COMMAND_MODULE_HEADERS})
Source_Group("Header Files\\Module\\Conversions"            FILES ${SOURCEPYTHON_CONVERSIONS_MODULE_HEADERS})
Source_Group("Header Files\\Module\\Cvar"                   FILES ${SOURCEPYTHON_CVAR_MODULE_HEADERS})
Source_Group("Header Files\\Module\\Dump"                   FILES ${SOURCEPYTHON_DUMP_MODULE_HEADERS})
Source_Group("Header Files\\Module\\Effects"                FILES ${SOURCEPYTHON_EFFECTS_MODULE_HEADERS})
Source_Group("Header Files\\Module\\Engine"                 FILES ${SOURCEPYTHON_ENGINE_MODULE_HEADERS})
Source_Group("Header Files\\Module\\Event"                  FILES ${SOURCEPYTHON_EVENT_MODULE_HEADERS})
Source_Group("Header Files\\Module\\Entity"                 FILES ${SOURCEPYTHON_ENTITY_MODULE_HEADERS})
Source_Group("Header Files\\Module\\Globals"                FILES ${SOURCEPYTHON_GLOBALS_MODULE_HEADERS})
Source_Group("Header Files\\Module\\KeyValues"              FILES ${SOURCEPYTHON_KEYVALUES_MODULE_HEADERS})
Source_Group("Header Files\\Module\\Listener"               FILES ${SOURCEPYTHON_LISTENERS_MODULE_HEADERS})
Source_Group("Header Files\\Module\\Mathlib"                FILES ${SOURCEPYTHON_MATHLIB_MODULE_HEADERS})
Source_Group("Header Files\\Module\\Memory"                 FILES ${SOURCEPYTHON_MEMORY_MODULE_HEADERS})
Source_Group("Header Files\\Module\\Player"                 FILES ${SOURCEPYTHON_PLAYERS_MODULE_HEADERS})
Source_Group("Header Files\\Module\\RecipientFilter"        FILES ${SOURCEPYTHON_RECIPIENTFILTER_MODULE_HEADERS})
Source_Group("Header Files\\Module\\Usermessage"            FILES ${SOURCEPYTHON_USERMESSAGE_MODULE_HEADERS})
Source_Group("Header Files\\Module\\StringTables"           FILES ${SOURCEPYTHON_STRINGTABLES_MODULE_HEADERS})
Source_Group("Header Files\\Module\\DataMap"                FILES ${SOURCEPYTHON_DATAMAP_MODULE_HEADERS})

Source_Group("Source Files\\Addons"                         FILES ${SOURCEPYTHON_ADDON_SOURCES})
Source_Group("Source Files\\Core"                           FILES ${SOURCEPYTHON_CORE_SOURCES})
Source_Group("Source Files\\Util"                           FILES ${SOURCEPYTHON_UTIL_SOURCES})
Source_Group("Source Files\\Generic"                        FILES ${SOURCEPYTHON_GENERIC_SOURCES})
Source_Group("Source Files\\Module\\Bot"                    FILES ${SOURCEPYTHON_BOT_MODULE_SOURCES})
Source_Group("Source Files\\Module\\Command"                FILES ${SOURCEPYTHON_COMMAND_MODULE_SOURCES})
Source_Group("Source Files\\Module\\Conversions"            FILES ${SOURCEPYTHON_CONVERSIONS_MODULE_SOURCES})
Source_Group("Source Files\\Module\\Cvar"                   FILES ${SOURCEPYTHON_CVAR_MODULE_SOURCES})
Source_Group("Source Files\\Module\\Dump"                   FILES ${SOURCEPYTHON_DUMP_MODULE_SOURCES})
Source_Group("Source Files\\Module\\Effects"                FILES ${SOURCEPYTHON_EFFECTS_MODULE_SOURCES})
Source_Group("Source Files\\Module\\Engine"                 FILES ${SOURCEPYTHON_ENGINE_MODULE_SOURCES})
Source_Group("Source Files\\Module\\Entity"                 FILES ${SOURCEPYTHON_ENTITY_MODULE_SOURCES})
Source_Group("Source Files\\Module\\Event"                  FILES ${SOURCEPYTHON_EVENT_MODULE_SOURCES})
Source_Group("Source Files\\Module\\Globals"                FILES ${SOURCEPYTHON_GLOBALS_MODULE_SOURCES})
Source_Group("Source Files\\Module\\KeyValues"              FILES ${SOURCEPYTHON_KEYVALUES_MODULE_SOURCES})
Source_Group("Source Files\\Module\\Listener"               FILES ${SOURCEPYTHON_LISTENERS_MODULE_SOURCES})
Source_Group("Source Files\\Module\\Mathlib"                FILES ${SOURCEPYTHON_MATHLIB_MODULE_SOURCES})
Source_Group("Source Files\\Module\\Memory"                 FILES ${SOURCEPYTHON_MEMORY_MODULE_SOURCES})
Source_Group("Source Files\\Module\\Player"                 FILES ${SOURCEPYTHON_PLAYERS_MODULE_SOURCES})
Source_Group("Source Files\\Module\\RecipientFilter"        FILES ${SOURCEPYTHON_RECIPIENTFILTER_MODULE_SOURCES})
Source_Group("Source Files\\Module\\Usermessage"            FILES ${SOURCEPYTHON_USERMESSAGE_MODULE_SOURCES})
Source_Group("Source Files\\Module\\Usermessage\\${SDK}"    FILES ${SOURCEPYTHON_MODULE_USERMESSAGES_GAME_SOURCES})
Source_Group("Source Files\\Module\\StringTables"           FILES ${SOURCEPYTHON_MODULE_STRINGTABLES_SOURCES})
Source_Group("Source Files\\Module\\DataMap"                FILES ${SOURCEPYTHON_MODULE_DATAMAP_SOURCES})

# ------------------------------------------------------------------
# All SourcePython source files. Ideally we break out each group of 
# files into their own defines (as above with SOURCEPYTHON_CORE_FILES.
# ------------------------------------------------------------------

# ------------------------------------------------------------------
# This basically creates the SourcePython project. Certain project 
# attributes like Target_Link_Libraries need to be declared after 
# this line.
# ------------------------------------------------------------------
Add_Library(core SHARED 
    ${SOURCEPYTHON_CORE_FILES}
    ${SOURCEPYTHON_ADDON_FILES}
    ${SOURCEPYTHON_GENERIC_FILES}
    ${SOURCEPYTHON_MODULE_FILES}
    ${SOURCEPYTHON_UTIL_FILES}
)

Add_Library(source-python SHARED
    ${SOURCEPYTHON_LOADER_FILES}
)

# ------------------------------------------------------------------
# Remove prefixes for core and source-python
# ------------------------------------------------------------------
Set_Target_Properties(core PROPERTIES PREFIX "")
Set_Target_Properties(source-python PROPERTIES PREFIX "")

# ------------------------------------------------------------------
# Include the base makefile.
# ------------------------------------------------------------------
If(WIN32)
    include("makefiles/win32/win32.base.cmake")
Else()
    include("makefiles/linux/linux.base.cmake")
EndIf()

# ------------------------------------------------------------------
# Definitions
# ------------------------------------------------------------------
Add_Definitions(
    -DSOURCE_ENGINE=${SOURCE_ENGINE}
    -DBOOST_PYTHON_MAX_ARITY=18
)

# ------------------------------------------------------------------
# Setup link libraries for this project.
# ------------------------------------------------------------------
Target_Link_Libraries(core          ${SOURCEPYTHON_LINK_LIBRARIES})
Target_Link_Libraries(source-python ${SOURCEPYTHON_LINK_LIBRARIES})

# ------------------------------------------------------------------
# This is a hack for linux which doesn't seem to have proper
# configurations which breaks link libraries.
# ------------------------------------------------------------------
If(UNIX)
    If(CMAKE_BUILD_TYPE MATCHES Debug)
        Target_Link_Libraries(core ${SOURCEPYTHON_LINK_LIBRARIES_DEBUG})
    Else()
        Target_Link_Libraries(core ${SOURCEPYTHON_LINK_LIBRARIES_RELEASE})
    EndIf()
Else()
    # Do it the correct way.
    Target_Link_Libraries(core ${SOURCEPYTHON_LINK_LIBRARIES_DEBUG})
    Target_Link_Libraries(core ${SOURCEPYTHON_LINK_LIBRARIES_RELEASE})
EndIf()
