/*****************************************************************************
*
*  PROJECT:     Multi Theft Auto
*  LICENSE:     See LICENSE in the top level directory
*  FILE:        mods/deathmatch/logic/CResourceChecker.Data.h
*  PURPOSE:     Resource file content checker/validator/upgrader
*
*  Multi Theft Auto is available from http://www.multitheftauto.com/
*
*****************************************************************************/

namespace
{

    //
    // Minimum version requirments for functions/events
    //

    struct SVersionItem
    {
        SString functionName;
        SString minMtaVersion;      
    };

    SVersionItem clientFunctionInitList[] = {
        { "createSWATRope",            "1.1.1-9.03250" },
        { "toJSON",                    "1.1.1-9.03316" },
        { "fromJSON",                  "1.1.1-9.03316" },
        { "dxSetShaderTessellation",   "1.1.1-9.03316" },
        { "setDevelopmentMode",        "1.1.1-9.03355" },
        { "getDevelopmentMode",        "1.1.1-9.03355" },
        { "getOriginalWeaponProperty", "1.2" },
        { "getWeaponProperty",         "1.2" },
        { "getVehicleVariant",         "1.2" },
        { "setLowLODElement",          "1.2" },
        { "getLowLODElement",          "1.2" },
        { "isElementLowLOD",           "1.2" },
        { "resetWaterLevel",           "1.2" },
        { "removeWorldModel",          "1.2.0-9.03618" },
        { "restoreWorldModel",         "1.2.0-9.03618" },
        { "restoreAllWorldModels",     "1.2.0-9.03618" },
        { "dxSetShaderTransform",      "1.2.0-9.03618" },
        { "onClientVehicleCollision",  "1.3" },
        { "setBirdsEnabled",           "1.3" },
        { "setOcclusionsEnabled",      "1.3" },
        { "dxGetTexturePixels",        "1.3" },
        { "dxSetTexturePixels",        "1.3" },
        { "dxGetPixelsSize",           "1.3" },
        { "dxGetPixelsFormat",         "1.3" },
        { "dxConvertPixels",           "1.3" },
        { "dxGetPixelColor",           "1.3" },
        { "dxSetPixelColor",           "1.3" },
        { "triggerLatentServerEvent",  "1.3.0-9.03772" },
        { "getLatentEventHandles",     "1.3.0-9.03772" },
        { "getLatentEventStatus",      "1.3.0-9.03772" },
        { "cancelLatentEvent",         "1.3.0-9.03772" },
        { "dxSetBlendMode",            "1.3.0-9.03782" },
        { "dxGetBlendMode",            "1.3.0-9.03782" },
        { "isObjectBreakable",         "1.3.0-9.03783" },
        { "setObjectBreakable",        "1.3.0-9.03783" },
        { "onClientPedHeliKilled",     "1.3.0-9.03893" },
        { "onClientPlayerHeliKilled",  "1.3.0-9.03893" },
        { "onClientPlayerPickupHit",   "1.3.0-9.03919" },
        { "onClientPlayerPickupLeave", "1.3.0-9.03919" },
        { "onClientPlayerHitByWaterCannon","1.3.0-9.03931" },
        { "onClientPedHitByWaterCannon",   "1.3.0-9.03931" },
        { "dxDrawMaterialLine3D",          "1.3.0-9.03931" },
        { "dxDrawMaterialSectionLine3D",   "1.3.0-9.03931" },
        { "getVehicleSirenParams",     "1.3.0-9.03968" },
        { "getVehicleSirens",          "1.3.0-9.03968" },
        { "setVehicleSirens",          "1.3.0-9.03968" },
        { "getSoundProperties",        "1.3.0-9.04109" },
        { "setSoundProperties",        "1.3.0-9.04109" },
        { "getSoundFFTData",           "1.3.0-9.04123" },
        { "setSoundPanningEnabled",    "1.3.0-9.04128" },
        { "isSoundPanningEnabled",     "1.3.0-9.04128" },
        { "setWorldSoundEnabled",      "1.3.0-9.04134" },
        { "isWorldSoundEnabled",       "1.3.0-9.04134" },
        { "resetWorldSounds",          "1.3.0-9.04134" },
        { "onClientSoundBeat",         "1.3.0-9.04162" },
        { "getSoundBPM",               "1.3.0-9.04162" },
        { "getSoundLevelData",         "1.3.0-9.04162" },
        { "getSoundWaveData",          "1.3.0-9.04162" },
        { "setPedAnalogControlState",  "1.3.0-9.04185" },
        { "setPedTargetingMarkerEnabled",  "1.3.0-9.04464" },
        { "isPedTargetingMarkerEnabled",   "1.3.0-9.04464" },
        { "setElementMatrix",              "1.3.0-9.04491" },
        { "warpPedIntoVehicle",            "1.3.0-9.04491" },
        { "removePedFromVehicle",          "1.3.0-9.04491" },
        { "setProjectileCounter",          "1.3.0-9.04555" },
        { "getProjectileCounter",          "1.3.0-9.04555" },
        { "createWeapon",                  "1.3.0-9.04555" },
        { "fireWeapon",                    "1.3.0-9.04555" },
        { "setWeaponProperty",             "1.3.0-9.04555" },
        { "setWeaponState",                "1.3.0-9.04555" },
        { "getWeaponState",                "1.3.0-9.04557" },
        { "setWeaponTarget",               "1.3.0-9.04555" },
        { "getWeaponTarget",               "1.3.0-9.04557" },
        { "setWeaponOwner",                "1.3.0-9.04555" },
        { "getWeaponOwner",                "1.3.0-9.04555" },
        { "setWeaponFlags",                "1.3.0-9.04555" },
        { "getWeaponFlags",                "1.3.0-9.04555" },
        { "setWeaponFiringRate",           "1.3.0-9.04555" },
        { "getWeaponFiringRate",           "1.3.0-9.04555" },
        { "resetWeaponFiringRate",         "1.3.0-9.04555" },
        { "getWeaponClipAmmo",             "1.3.0-9.04555" },
        { "setWeaponClipAmmo",             "1.3.0-9.04555" },
        { "setWeaponAmmo",                 "1.3.0-9.04555" },
        { "getWeaponAmmo",                 "1.3.0-9.04555" },
        { "fileCopy",                      "1.3.0-9.04584" },
        { "setWaterDrawnLast",             "1.3.0-9.04584" },
        { "isWaterDrawnLast",              "1.3.0-9.04584" },
        { "setPlayerHudComponentVisible",  "1.3.1-9.04690" },
        { "isPlayerHudComponentVisible",   "1.3.1-9.04690" },
        { "engineGetModelLODDistance",     "1.3.1-9.04779" },
        { "sha256",                        "1.3.1-9.04835" },
        { "setPedWalkingStyle",            "1.3.1-9.04935" },
        { "guiGridListSetColumnTitle",     "1.3.1-9.04945" },
        { "guiGridListGetColumnTitle",     "1.3.1-9.04945" },
        { "setAircraftMaxVelocity",        "1.3.1-9.04997" },
        { "getAircraftMaxVelocity",        "1.3.1-9.04997" },
        { "guiStaticImageGetNativeSize",   "1.3.1-9.05122" },
        { "toggleObjectRespawn",           "1.3.1-9.05122" },
        { "breakObject",                   "1.3.1-9.05122" },
        { "setObjectMass",                 "1.3.2" },
        { "getObjectMass",                 "1.3.2" },
        { "setCursorAlpha",                "1.3.2" },
        { "getCursorAlpha",                "1.3.2" },
        { "setFPSLimit",                   "1.3.2" },
        { "fetchRemote",                   "1.3.2" },
        { "bitAnd",                        "1.3.2" },
        { "bitNot",                        "1.3.2" },
        { "bitOr",                         "1.3.2" },
        { "bitTest",                       "1.3.2" },
        { "bitXor",                        "1.3.2" },
        { "bitLRotate",                    "1.3.2" },
        { "bitRRotate",                    "1.3.2" },
        { "bitLShift",                     "1.3.2" },
        { "bitRShift",                     "1.3.2" },
        { "bitArShift",                    "1.3.2" },
        { "bitExtract",                    "1.3.2" },
        { "bitReplace",                    "1.3.2" },
        { "dxSetAspectRatioAdjustmentEnabled", "1.3.3-9.05546" },
        { "dxIsAspectRatioAdjustmentEnabled",  "1.3.3-9.05546" },
        { "getEventHandlers",              "1.3.4" },
        { "playSFX",                       "1.3.4" },
        { "playSFX3D",                     "1.3.4" },
        { "getHeliBladeCollisionsEnabled",  "1.3.4-9.05764" },
        { "setHeliBladeCollisionsEnabled",  "1.3.4-9.05764" },
        { "onClientVehicleDamage",         "1.3.5" },
        { "isPedDead",                     "1.3.5" },
        { "getCamera",                     "1.3.5" },
        { "dxSetTextureEdge",              "1.3.5" },
        { "guiEditGetCaretIndex",          "1.3.5" },
        { "guiMemoGetCaretIndex",          "1.3.5" },
        { "addDebugHook",                  "1.3.5" },
        { "removeDebugHook",               "1.3.5" },
        { "teaEncode",                     "1.3.5" },
        { "teaDecode",                     "1.3.5" },
        { "base64Encode",                  "1.3.5" },
        { "base64Decode",                  "1.3.5" },
        { "pregFind",                      "1.3.5" },
        { "pregReplace",                   "1.3.5" },
        { "pregMatch",                     "1.3.5" },
        { "setInteriorFurnitureEnabled",   "1.3.5-9.06101" },
        { "getInteriorFurnitureEnabled",   "1.3.5-9.06101" },
        { "setElementCallPropagationEnabled",  "1.3.5-9.06118" },
        { "isElementCallPropagationEnabled",   "1.3.5-9.06118" },
        { "getResourceState",              "1.3.5-9.06194" },
    };

    SVersionItem serverFunctionInitList[] = {
        { "onChatMessage",             "1.1.1-9.03316" },
        { "getPlayerIdleTime",         "1.1.1-9.03316" },
        { "copyResource",              "1.1.1-9.03316" },
        { "renameResource",            "1.1.1-9.03316" },
        { "deleteResource",            "1.1.1-9.03316" },
        { "dbConnect",                 "1.1.1-9.03328" },
        { "dbQuery",                   "1.1.1-9.03328" },
        { "dbPoll",                    "1.1.1-9.03328" },
        { "dbFree",                    "1.1.1-9.03328" },
        { "dbExec",                    "1.1.1-9.03341" },
        { "resendPlayerModInfo",       "1.1.1-9.03451" },
        { "getResourceACLRequests",    "1.1.1-9.03503" },
        { "updateResourceACLRequest",  "1.1.1-9.03503" },
        { "getOriginalWeaponProperty", "1.2" },
        { "getWeaponProperty",         "1.2" },
        { "setWeaponProperty",         "1.2" },
        { "getVehicleVariant",         "1.2" },
        { "setVehicleVariant",         "1.2" },
        { "setLowLODElement",          "1.2" },
        { "getLowLODElement",          "1.2" },
        { "isElementLowLOD",           "1.2" },
        { "resetWaterLevel",           "1.2" },
        { "removeWorldModel",          "1.2.0-9.03618" },
        { "restoreWorldModel",         "1.2.0-9.03618" },
        { "restoreAllWorldModels",     "1.2.0-9.03618" },
        { "takePlayerScreenShot",      "1.3" },
        { "onPlayerScreenShot",        "1.3" },
        { "setOcclusionsEnabled",      "1.3" },
        { "getOcclusionsEnabled",      "1.3" },
        { "fetchRemote",               "1.3.0-9.03739" },
        { "triggerLatentClientEvent",  "1.3.0-9.03772" },
        { "getLatentEventHandles",     "1.3.0-9.03772" },
        { "getLatentEventStatus",      "1.3.0-9.03772" },
        { "cancelLatentEvent",         "1.3.0-9.03772" },
        { "getAllAccountData",         "1.3.0-9.03804" },
        { "reloadBans",                "1.3.0-9.03931" },
        { "getVehicleSirenParams",     "1.3.0-9.03968" },
        { "removeVehicleSirens",       "1.3.0-9.03968" },
        { "getVehicleSirens",          "1.3.0-9.03968" },
        { "addVehicleSirens",          "1.3.0-9.03968" },
        { "setVehicleSirens",          "1.3.0-9.03968" },
        { "setJetpackWeaponEnabled",   "1.3.0-9.04351" },
        { "getJetpackWeaponEnabled",   "1.3.0-9.04351" },
        { "sha256",                    "1.3.1-9.04835" },
        { "setPedWalkingStyle",        "1.3.1-9.04935" },
        { "setAircraftMaxVelocity",    "1.3.1-9.04997" },
        { "getAircraftMaxVelocity",    "1.3.1-9.04997" },
        { "bitAnd",                    "1.3.2" },
        { "bitNot",                    "1.3.2" },
        { "bitOr",                     "1.3.2" },
        { "bitTest",                   "1.3.2" },
        { "bitXor",                    "1.3.2" },
        { "bitLRotate",                "1.3.2" },
        { "bitRRotate",                "1.3.2" },
        { "bitLShift",                 "1.3.2" },
        { "bitRShift",                 "1.3.2" },
        { "bitArShift",                "1.3.2" },
        { "bitExtract",                "1.3.2" },
        { "bitReplace",                "1.3.2" },
        { "getPlayerACInfo",           "1.3.3" },
        { "addDebugHook",              "1.3.4-9.05939" },
        { "removeDebugHook",           "1.3.4-9.05939" },
        { "teaEncode",                 "1.3.5" },
        { "teaDecode",                 "1.3.5" },
        { "base64Encode",              "1.3.5" },
        { "base64Decode",              "1.3.5" },
        { "pregFind",                  "1.3.5" },
        { "pregReplace",               "1.3.5" },
        { "pregMatch",                 "1.3.5" },
        { "setElementCallPropagationEnabled",  "1.3.5-9.06118" },
        { "isElementCallPropagationEnabled",   "1.3.5-9.06118" },
        { "resendPlayerACInfo",        "1.5.1-9.07633" },
        { "dbPrepareString",           "1.5.2" },
    };


    //
    // Deprecated function/events
    //

    struct SDeprecatedItem
    {
        bool bRemoved;
        SString strOldName;
        SString strNewName;      
    };

    SDeprecatedItem clientDeprecatedList[] = {
        // Client functions

        { false, "getPlayerRotation",              "getPedRotation" },
        { false, "canPlayerBeKnockedOffBike",      "canPedBeKnockedOffBike" },
        { false, "getPlayerContactElement",        "getPedContactElement" },
        { false, "isPlayerInVehicle",              "isPedInVehicle" },
        { false, "doesPlayerHaveJetPack",          "doesPedHaveJetPack" },
        { false, "isPlayerInWater",                "isElementInWater" },
        { false, "isPedInWater",                   "isElementInWater" },
        { false, "isPlayerOnGround",               "isPedOnGround" },
        { false, "getPlayerTask",                  "getPedTask" },
        { false, "getPlayerSimplestTask",          "getPedSimplestTask" },
        { false, "isPlayerDoingTask",              "isPedDoingTask" },
        { false, "getPlayerTarget",                "getPedTarget" },
        { false, "getPlayerTargetStart",           "getPedTargetStart" },
        { false, "getPlayerTargetEnd",             "getPedTargetEnd" },
        { false, "getPlayerTargetRange",           "getPedTargetRange" },
        { false, "getPlayerTargetCollision",       "getPedTargetCollision" },
        { false, "getPlayerWeaponSlot",            "getPedWeaponSlot" },
        { false, "getPlayerWeapon",                "getPedWeapon" },
        { false, "getPlayerAmmoInClip",            "getPedAmmoInClip" },
        { false, "getPlayerTotalAmmo",             "getPedTotalAmmo" },
        { false, "getPlayerOccupiedVehicle",       "getPedOccupiedVehicle" },
        { false, "getPlayerArmor",                 "getPedArmor" },
        { false, "getPlayerSkin",                  "getElementModel" },
        { false, "isPlayerChoking",                "isPedChoking" },
        { false, "isPlayerDucked",                 "isPedDucked" },
        { false, "getPlayerStat",                  "getPedStat" },
        { false, "setPlayerWeaponSlot",            "setPedWeaponSlot" },
        { false, "setPlayerSkin",                  "setElementModel" },
        { false, "setPlayerRotation",              "setPedRotation" },
        { false, "setPlayerCanBeKnockedOffBike",   "setPedCanBeKnockedOffBike" },
        { false, "setVehicleModel",                "setElementModel" },
        { false, "getVehicleModel",                "getElementModel" },
        { false, "getPedSkin",                     "getElementModel" },
        { false, "setPedSkin",                     "setElementModel" },
        { false, "getObjectRotation",              "getElementRotation" },
        { false, "setObjectRotation",              "setElementRotation" },
        { false, "getVehicleIDFromName",           "getVehicleModelFromName" },
        { false, "getVehicleID",                   "getElementModel" },
        { false, "getVehicleRotation",             "getElementRotation" },
        { false, "getVehicleNameFromID",           "getVehicleNameFromModel" },
        { false, "setVehicleRotation",             "setElementRotation" },
        { false, "attachElementToElement",         "attachElements" },
        { false, "detachElementFromElement",       "detachElements" },
        { false, "xmlFindSubNode",                 "xmlFindChild" },
        { false, "xmlNodeGetSubNodes",             "xmlNodeGetChildren" },
        { false, "xmlNodeFindSubNode",             "xmlFindChild" },
        { false, "xmlCreateSubNode",               "xmlCreateChild" },
        { false, "isPedFrozen",                    "isElementFrozen" },
        { false, "isVehicleFrozen",                "isElementFrozen" },
        { false, "isObjectStatic",                 "isElementFrozen" },
        { false, "setPedFrozen",                   "setElementFrozen" },
        { false, "setVehicleFrozen",               "setElementFrozen" },
        { false, "setObjectStatic",                "setElementFrozen" },
        { false, "isPlayerDead",                   "isPedDead" },
        { false, "showPlayerHudComponent",         "setPlayerHudComponentVisible" },
        { false, "setControlState",                "setPedControlState" },
        { false, "getControlState",                "getPedControlState" },
        // Edit
        { false, "guiEditSetCaratIndex",           "guiEditSetCaretIndex" },
        { false, "guiMemoSetCaratIndex",           "guiMemoSetCaretIndex" },
        // XML
        { false, "xmlNodeFindChild",               "xmlFindChild" },
    };


    SDeprecatedItem serverDeprecatedList[] = {
        // Server events
        { false, "onClientLogin",                  "onPlayerLogin" },
        { false, "onClientLogout",                 "onPlayerLogout" },
        { false, "onClientChangeNick",             "onPlayerChangeNick" },
        // Server functions
        { false, "getPlayerSkin",                  "getElementModel" },
        { false, "setPlayerSkin",                  "setElementModel" },
        { false, "getVehicleModel",                "getElementModel" },
        { false, "setVehicleModel",                "setElementModel" },
        { false, "getObjectModel",                 "getElementModel" },
        { false, "setObjectModel",                 "setElementModel" },
        { false, "getVehicleID",                   "getElementModel" },
        { false, "getVehicleIDFromName",           "getVehicleModelFromName" },
        { false, "getVehicleNameFromID",           "getVehicleNameFromModel" },
        { false, "getPlayerWeaponSlot",            "getPedWeaponSlot" },
        { false, "getPlayerWeapon",                "getPedWeapon" },
        { false, "getPlayerTotalAmmo",             "getPedTotalAmmo" },
        { false, "getPlayerAmmoInClip",            "getPedAmmoInClip" },
        { false, "getPlayerArmor",                 "getPedArmor" },
        { false, "getPlayerRotation",              "getPedRotation" },
        { false, "isPlayerChoking",                "isPedChoking" },
        { false, "isPlayerDead",                   "isPedDead" },
        { false, "isPlayerDucked",                 "isPedDucked" },
        { false, "getPlayerStat",                  "getPedStat" },
        { false, "getPlayerTarget",                "getPedTarget" },
        { false, "getPlayerClothes",               "getPedClothes" },
        { false, "doesPlayerHaveJetPack",          "doesPedHaveJetPack" },
        { false, "isPlayerInWater",                "isElementInWater" },
        { false, "isPedInWater",                   "isElementInWater" },
        { false, "isPlayerOnGround",               "isPedOnGround" },
        { false, "getPlayerFightingStyle",         "getPedFightingStyle" },
        { false, "getPlayerGravity",               "getPedGravity" },
        { false, "getPlayerContactElement",        "getPedContactElement" },
        { false, "setPlayerArmor",                 "setPedArmor" },
        { false, "setPlayerWeaponSlot",            "setPedWeaponSlot" },
        { false, "killPlayer",                     "killPed" },
        { false, "setPlayerRotation",              "setPedRotation" },
        { false, "setPlayerStat",                  "setPedStat" },
        { false, "addPlayerClothes",               "addPedClothes" },
        { false, "removePlayerClothes",            "removePedClothes" },
        { false, "givePlayerJetPack",              "givePedJetPack" },
        { false, "removePlayerJetPack",            "removePedJetPack" },
        { false, "setPlayerFightingStyle",         "setPedFightingStyle" },
        { false, "setPlayerGravity",               "setPedGravity" },
        { false, "setPlayerChoking",               "setPedChoking" },
        { false, "warpPlayerIntoVehicle",          "warpPedIntoVehicle" },
        { false, "removePlayerFromVehicle",        "removePedFromVehicle" },
        { false, "attachElementToElement",         "attachElements" },
        { false, "detachElementFromElement",       "detachElements" },
        { false, "showPlayerHudComponent",         "setPlayerHudComponentVisible"},
        // XML
        { false, "xmlNodeGetSubNodes",             "xmlNodeGetChildren" },
        { false, "xmlCreateSubNode",               "xmlCreateChild" },
        { false, "xmlFindSubNode",                 "xmlFindChild" },
        // Frozen
        { false, "isPedFrozen",                    "isElementFrozen" },
        { false, "isVehicleFrozen",                "isElementFrozen" },
        { false, "setPedFrozen",                   "setElementFrozen" },
        { false, "setVehicleFrozen",               "setElementFrozen" },
        // Player
        { false, "getPlayerOccupiedVehicle",       "getPedOccupiedVehicle" },
        { false, "getPlayerOccupiedVehicleSeat",   "getPedOccupiedVehicleSeat" },
        { false, "isPlayerInVehicle",              "isPedInVehicle" },
        { false, "getPlayerFromNick",              "getPlayerFromName" },
        // Client
        { false, "getClientName",                  "getPlayerName" },
        { false, "getClientIP",                    "getPlayerIP" },
        { false, "getClientAccount",               "getPlayerAccount" },
        { false, "getAccountClient",               "getAccountPlayer" },
        { false, "setClientName",                  "setPlayerName" },
        // Utility
        { false, "randFloat",                      "math.random" },
        { false, "randInt",                        "math.random" },
        // Weapon
        { false, "giveWeaponAmmo",                 "giveWeapon" },
        { false, "takeWeaponAmmo",                 "takeWeapon" },

        // Admin
        { true, "banIP",                           "Please manually update this.  Refer to the wiki for details" },
        { true, "banSerial",                       "Please manually update this.  Refer to the wiki for details" },
        { true, "unbanIP",                         "Please manually update this.  Refer to the wiki for details" },
        { true, "unbanSerial",                     "Please manually update this.  Refer to the wiki for details" },
        { true, "getBansXML",                      "Please manually update this.  Refer to the wiki for details" },
        { true, "canPlayerUseFunction",            "Please manually update this.  Refer to the wiki for details" },
    };
}
