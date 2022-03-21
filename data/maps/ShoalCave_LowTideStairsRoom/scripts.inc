ShoalCave_LowTideStairsRoom_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideStairsRoom_OnLoad
	.byte 0

ShoalCave_LowTideStairsRoom_OnLoad:
	call ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatiles
	end

ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatiles::
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_3, ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatilesEnd
	setmetatile 11, 11, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
	return

ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatilesEnd::
	return

ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3::
	lockall
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_3, ShoalCave_LowTideStairsRoom_EventScript_ReceivedShoalSalt
	giveitem ITEM_SHOAL_SALT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setmetatile 11, 11, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
	special DrawWholeMapView
	setflag FLAG_RECEIVED_SHOAL_SALT_3
	releaseall
	end

ShoalCave_LowTideStairsRoom_EventScript_ReceivedShoalSalt::
	msgbox ShoalCave_Text_WasShoalSaltNowNothing, MSGBOX_DEFAULT
	releaseall
	end

ShoalCave_LowTideStairsRoom_EventScript_Hiker::
    goto_if_set FLAG_DEFEATED_PETALBURG_GYM, ShoalCave_LowTideStairsRoom_EventScript_HikerCheck
	msgbox ShoalCave_LowTideStairsRoom_Text_Hiker, MSGBOX_NPC
	end

ShoalCave_LowTideStairsRoom_EventScript_HikerCheck::
    goto_if_set FLAG_RECEIVED_GLALITITE, ShoalCave_LowTideStairsRoom_EventScript_HikerGot
    specialvar VAR_RESULT, CheckPartyGlalie
    goto_if_eq VAR_RESULT, TRUE, ShoalCave_LowTideStairsRoom_EventScript_HikerGive
    msgbox ShoalCave_LowTideStairsRoom_Text_Hiker, MSGBOX_NPC
    end

ShoalCave_LowTideStairsRoom_EventScript_HikerGive::
    lock
    faceplayer
    msgbox ShoalCave_LowTideStairsRoom_Text_HikerGive, MSGBOX_DEFAULT
    giveitem ITEM_GLALITITE
    setflag FLAG_RECEIVED_GLALITITE
    release
    end

ShoalCave_LowTideStairsRoom_EventScript_HikerGot::
    msgbox ShoalCave_LowTideStairsRoom_Text_Hiker, MSGBOX_NPC
    end

ShoalCave_LowTideStairsRoom_Text_Hiker:
    .string "Hey, do you know where to\n"
    .string "find a SNORUNT?\p"

ShoalCave_LowTideStairsRoom_Text_HikerGive:
    .string "Oh, you have a GLALIE.\n"
    .string "I have an extra MEGA STONE,\l"
    .string "you can have it.$"
