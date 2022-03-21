.set LOCALID_ATTENDANT, 1

SafariZone_South_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SafariZone_South_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SafariZone_South_OnFrame
	.byte 0

SafariZone_South_OnFrame:
	map_script_2 VAR_SAFARI_ZONE_STATE, 2, SafariZone_South_EventScript_EnterSafariZone
	.2byte 0

SafariZone_South_EventScript_EnterSafariZone::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, SafariZone_South_Movement_PlayerEnter
	waitmovement 0
	applymovement LOCALID_ATTENDANT, SafariZone_South_Movement_ExitAttendantBlockDoor
	waitmovement 0
	setobjectxyperm LOCALID_ATTENDANT, 32, 34
	setvar VAR_SAFARI_ZONE_STATE, 0
	releaseall
	end

SafariZone_South_OnTransition:
	call_if_eq VAR_SAFARI_ZONE_STATE, 2, SafariZone_South_EventScript_SetExitAttendantAside
	end

SafariZone_South_EventScript_SetExitAttendantAside::
	setobjectxyperm LOCALID_ATTENDANT, 31, 34
	return

SafariZone_South_Movement_PlayerEnter:
	walk_down
	step_end

SafariZone_South_Movement_ExitAttendantBlockDoor:
	walk_right
	walk_in_place_faster_down
	step_end

SafariZone_South_EventScript_Boy::
	msgbox SafariZone_South_Text_Boy, MSGBOX_NPC
	end

SafariZone_South_EventScript_Man::
	msgbox SafariZone_South_Text_Man, MSGBOX_NPC
	end

SafariZone_South_EventScript_Youngster::
	msgbox SafariZone_South_Text_Youngster, MSGBOX_NPC
	end

SafariZone_South_EventScript_ExitAttendant::
	lock
	faceplayer
	goto_if_unset FLAG_GOOD_LUCK_SAFARI_ZONE, SafariZone_South_EventScript_GoodLuck
	msgbox SafariZone_South_Text_StillHaveTimeExit, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SafariZone_South_EventScript_ExitEarly
	msgbox SafariZone_South_Text_EnjoyTheRestOfYourAdventure, MSGBOX_DEFAULT
	release
	end

SafariZone_South_EventScript_GoodLuck::
	setflag FLAG_GOOD_LUCK_SAFARI_ZONE
	msgbox SafariZone_South_Text_GoodLuck, MSGBOX_DEFAULT
	release
	end

SafariZone_South_EventScript_ExitEarly::
	msgbox SafariZone_South_Text_ExitEarlyThankYouForPlaying, MSGBOX_DEFAULT
	closemessage
	switch VAR_FACING
	case DIR_NORTH, SafariZone_South_EventScript_ExitEarlyNorth
	case DIR_EAST, SafariZone_South_EventScript_ExitEarlyEast
	end

SafariZone_South_EventScript_ExitEarlyNorth::
	applymovement LOCALID_ATTENDANT, SafariZone_South_Movement_MoveExitAttendantNorth
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SafariZone_South_Movement_PlayerExitNorth
	waitmovement 0
	goto SafariZone_South_EventScript_Exit
	end

SafariZone_South_EventScript_ExitEarlyEast::
	applymovement LOCALID_ATTENDANT, SafariZone_South_Movement_MoveExitAttendantEast
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SafariZone_South_Movement_PlayerExitEast
	waitmovement 0
	goto SafariZone_South_EventScript_Exit
	end

SafariZone_South_EventScript_Exit::
	setvar VAR_SAFARI_ZONE_STATE, 1
	special ExitSafariMode
	warpdoor MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 2, 5
	waitstate
	end

SafariZone_South_Movement_PlayerExitNorth:
	walk_up
	step_end

SafariZone_South_Movement_PlayerExitEast:
	walk_right
	walk_in_place_faster_up
	step_end

SafariZone_South_Movement_MoveExitAttendantNorth:
	walk_left
	walk_in_place_faster_right
	step_end

SafariZone_South_Movement_MoveExitAttendantEast:
	walk_down
	walk_in_place_faster_up
	step_end

SafariZone_South_EventScript_MegaStoneGiver::
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, SafariZone_South_EventScript_MegaStoneGiverGive
    msgbox SafariZone_South_Text_MegaStoneGiver, MSGBOX_NPC
    end

SafariZone_South_EventScript_MegaStoneGiverGive::
    specialvar VAR_RESULT, CheckPartyKangaskhan
    goto_if_eq VAR_RESULT, TRUE, SafariZone_South_EventScript_MegaStoneGiverGiveKangaskhan
    specialvar VAR_RESULT, CheckPartyPinsir
    goto_if_eq VAR_RESULT, TRUE, SafariZone_South_EventScript_MegaStoneGiverGivePinsir
    specialvar VAR_RESULT, CheckPartyAmpharos
    goto_if_eq VAR_RESULT, TRUE, SafariZone_South_EventScript_MegaStoneGiverGiveAmpharos
    msgbox SafariZone_South_Text_MegaStoneGiver, MSGBOX_NPC
    end

SafariZone_South_EventScript_MegaStoneGiverGiveKangaskhan::
    goto_if_set FLAG_RECEIVED_KANGASKHANITE, SafariZone_South_EventScript_MegaStoneGot
    lock
    faceplayer
    msgbox SafariZone_South_Text_MegaStoneKangaskhan, MSGBOX_DEFAULT
    giveitem ITEM_KANGASKHANITE
    setflag FLAG_RECEIVED_KANGASKHANITE
    release
    end

SafariZone_South_EventScript_MegaStoneGiverGivePinsir::
    goto_if_set FLAG_RECEIVED_PINSIRITE, SafariZone_South_EventScript_MegaStoneGot
    lock
    faceplayer
    msgbox SafariZone_South_Text_MegaStonePinsir, MSGBOX_DEFAULT
    giveitem ITEM_PINSIRITE
    setflag FLAG_RECEIVED_PINSIRITE
    release
    end

SafariZone_South_EventScript_MegaStoneGiverGiveAmpharos::
    goto_if_set FLAG_RECEIVED_AMPHAROSITE, SafariZone_South_EventScript_MegaStoneGot
    lock
    faceplayer
    msgbox SafariZone_South_Text_MegaStoneAmpharos, MSGBOX_DEFAULT
    giveitem ITEM_AMPHAROSITE
    setflag FLAG_RECEIVED_AMPHAROSITE
    release
    end

SafariZone_South_EventScript_MegaStoneGot::
    msgbox SafariZone_South_Text_MegaStoneGiver, MSGBOX_NPC
    end

SafariZone_South_EventScript_ConstructionWorker1::
	msgbox SafariZone_South_Text_AreaOffLimits1, MSGBOX_NPC
	end

SafariZone_Southeast_EventScript_ExpansionZoneAttendant::
	msgbox SafariZone_Southeast_Text_ExpansionIsFinished, MSGBOX_NPC
	end

SafariZone_South_EventScript_ConstructionWorker2::
	msgbox SafariZone_South_Text_AreaOffLimits2, MSGBOX_NPC
	end

SafariZone_Southeast_EventScript_LittleGirl::
	msgbox SafariZone_Southeast_Text_LittleGirl, MSGBOX_NPC
	end

SafariZone_Southeast_EventScript_FatMan::
	msgbox SafariZone_Southeast_Text_FatMan, MSGBOX_NPC
	end

SafariZone_Southeast_EventScript_RichBoy::
	msgbox SafariZone_Southeast_Text_RichBoy, MSGBOX_NPC
	end

SafariZone_Northeast_EventScript_Boy::
	msgbox SafariZone_Northeast_Text_Boy, MSGBOX_NPC
	end

SafariZone_Northeast_EventScript_Woman::
	msgbox SafariZone_Northeast_Text_Woman, MSGBOX_NPC
	end

SafariZone_Northeast_EventScript_Girl::
	msgbox SafariZone_Northeast_Text_Girl, MSGBOX_NPC
	end

SafariZone_South_Text_MegaStoneGiver:
    .string "Don't you think the SAFARI ZONE\n"
    .string "is just so much fun?$"

SafariZone_South_Text_MegaStoneKangaskhan:
    .string "KANGASKHAN is just truly the heart\n"
    .string "of the safari. Take this.$"

SafariZone_South_Text_MegaStonePinsir:
    .string "PINSIR is just truly the soul\n"
    .string "of the safari. Take this.$"

SafariZone_South_Text_MegaStoneAmpharos:
    .string "AMPHAROS lives in this safari\n"
    .string "and I still want to find out why.\p"
    .string "Is your AMPHAROS from this safari?\n"
    .string "Take this stone and give it some\p"
    .string "love!$"
