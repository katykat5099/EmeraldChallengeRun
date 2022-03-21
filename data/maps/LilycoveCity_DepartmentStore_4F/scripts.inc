.set LOCALID_YOUNGSTER, 3
.set LOCALID_YOUNGSTER2, 7

LilycoveCity_DepartmentStore_4F_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_DepartmentStore_4F_OnTransition
	.byte 0

LilycoveCity_DepartmentStore_4F_OnTransition::
    clearflag FLAG_HIDE_YOUNGSTER
    removeobject LOCALID_YOUNGSTER2
    setflag FLAG_HIDE_YOUNGSTER2
    end
LilycoveCity_DepartmentStore_4F_EventScript_Gentleman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Woman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Youngster::
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_YoungsterNewEvolutionStoreMiddle1::
    goto_if_unset FLAG_YOUNGSTER_DEPARTMENT_STORE, LilycoveCity_DepartmentStore_4F_EventScript_YoungsterTalkToPlayerMiddle1
    release
    end

LilycoveCity_DepartmentStore_4F_EventScript_YoungsterNewEvolutionStoreMiddle2::
    goto_if_unset FLAG_YOUNGSTER_DEPARTMENT_STORE, LilycoveCity_DepartmentStore_4F_EventScript_YoungsterTalkToPlayerMiddle2
    release
    end

LilycoveCity_DepartmentStore_4F_EventScript_YoungsterNewEvolutionStoreMiddle3::
    goto_if_unset FLAG_YOUNGSTER_DEPARTMENT_STORE, LilycoveCity_DepartmentStore_4F_EventScript_YoungsterTalkToPlayerMiddle3
    release
    end

LilycoveCity_DepartmentStore_4F_EventScript_YoungsterNewEvolutionStoreLeft1::
    goto_if_unset FLAG_YOUNGSTER_DEPARTMENT_STORE, LilycoveCity_DepartmentStore_4F_EventScript_YoungsterTalkToPlayerLeft1
    release
    end

LilycoveCity_DepartmentStore_4F_EventScript_YoungsterNewEvolutionStoreLeft2::
    goto_if_unset FLAG_YOUNGSTER_DEPARTMENT_STORE, LilycoveCity_DepartmentStore_4F_EventScript_YoungsterTalkToPlayerLeft2
    release
    end

LilycoveCity_DepartmentStore_4F_EventScript_YoungsterNewEvolutionStoreLeft3::
    goto_if_unset FLAG_YOUNGSTER_DEPARTMENT_STORE, LilycoveCity_DepartmentStore_4F_EventScript_YoungsterTalkToPlayerLeft3
    release
    end

LilycoveCity_DepartmentStore_4F_EventScript_YoungsterNewEvolutionStoreRight1::
    goto_if_unset FLAG_YOUNGSTER_DEPARTMENT_STORE, LilycoveCity_DepartmentStore_4F_EventScript_YoungsterTalkToPlayerRight1
    release
    end

LilycoveCity_DepartmentStore_4F_EventScript_YoungsterNewEvolutionStoreRight2::
    goto_if_unset FLAG_YOUNGSTER_DEPARTMENT_STORE, LilycoveCity_DepartmentStore_4F_EventScript_YoungsterTalkToPlayerRight2
    release
    end

LilycoveCity_DepartmentStore_4F_EventScript_YoungsterNewEvolutionStoreRight3::
    goto_if_unset FLAG_YOUNGSTER_DEPARTMENT_STORE, LilycoveCity_DepartmentStore_4F_EventScript_YoungsterTalkToPlayerRight3
    release
    end

LilycoveCity_DepartmentStore_4F_EventScript_YoungsterTalkToPlayerMiddle1::
    lockall
    playse SE_PIN
    applymovement LOCALID_YOUNGSTER, Common_Movement_ExclamationMark
    waitmovement 0
    applymovement LOCALID_YOUNGSTER, Common_Movement_FacePlayer
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer0, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_YOUNGSTER, Common_Movement_FacePlayer
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer1, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_YOUNGSTER, LilycoveCity_DepartmentStore_4F_Movement_YoungsterFollowMeMiddle1
    applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_DepartmentStore_4F_Movement_PlayerFollowMiddle1
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer2, MSGBOX_DEFAULT
    closemessage
    setflag FLAG_YOUNGSTER_DEPARTMENT_STORE
    release
    end

LilycoveCity_DepartmentStore_4F_EventScript_YoungsterTalkToPlayerMiddle2::
    lockall
    playse SE_PIN
    applymovement LOCALID_YOUNGSTER, Common_Movement_ExclamationMark
    waitmovement 0
    applymovement LOCALID_YOUNGSTER, Common_Movement_FacePlayer
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer0, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_YOUNGSTER, LilycoveCity_DepartmentStore_4F_Movement_YoungsterApproachMiddle2
    waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer1, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_YOUNGSTER, LilycoveCity_DepartmentStore_4F_Movement_YoungsterFollowMeMiddle2
    applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_DepartmentStore_4F_Movement_PlayerFollowMiddle2
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer2, MSGBOX_DEFAULT
    closemessage
    setflag FLAG_YOUNGSTER_DEPARTMENT_STORE
    release
    end

LilycoveCity_DepartmentStore_4F_EventScript_YoungsterTalkToPlayerMiddle3::
    lockall
    playse SE_PIN
    applymovement LOCALID_YOUNGSTER, Common_Movement_ExclamationMark
    waitmovement 0
    applymovement LOCALID_YOUNGSTER, Common_Movement_FacePlayer
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer0, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_YOUNGSTER, LilycoveCity_DepartmentStore_4F_Movement_YoungsterApproachMiddle3
    waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer1, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_YOUNGSTER, LilycoveCity_DepartmentStore_4F_Movement_YoungsterFollowMeMiddle3
    applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_DepartmentStore_4F_Movement_PlayerFollowMiddle3
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer2, MSGBOX_DEFAULT
    closemessage
    setflag FLAG_YOUNGSTER_DEPARTMENT_STORE
    release
    end

LilycoveCity_DepartmentStore_4F_EventScript_YoungsterTalkToPlayerRight1::
    lockall
    playse SE_PIN
    applymovement LOCALID_YOUNGSTER, Common_Movement_ExclamationMark
    waitmovement 0
    applymovement LOCALID_YOUNGSTER, Common_Movement_FacePlayer
    waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer0, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_YOUNGSTER, LilycoveCity_DepartmentStore_4F_Movement_YoungsterApproachRight1
    waitmovement 0
    applymovement LOCALID_YOUNGSTER, Common_Movement_FacePlayer
    waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer1, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_YOUNGSTER, LilycoveCity_DepartmentStore_4F_Movement_YoungsterFollowMeRight1
    applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_DepartmentStore_4F_Movement_PlayerFollowRight1
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer2, MSGBOX_DEFAULT
    closemessage
    setflag FLAG_YOUNGSTER_DEPARTMENT_STORE
    release
    end

LilycoveCity_DepartmentStore_4F_EventScript_YoungsterTalkToPlayerRight2::
    lockall
    playse SE_PIN
    applymovement LOCALID_YOUNGSTER, Common_Movement_ExclamationMark
    waitmovement 0
    applymovement LOCALID_YOUNGSTER, Common_Movement_FacePlayer
    waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer0, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_YOUNGSTER, LilycoveCity_DepartmentStore_4F_Movement_YoungsterApproachRight2
    waitmovement 0
    applymovement LOCALID_YOUNGSTER, Common_Movement_FacePlayer
    waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer1, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_YOUNGSTER, LilycoveCity_DepartmentStore_4F_Movement_YoungsterFollowMeRight2
    applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_DepartmentStore_4F_Movement_PlayerFollowRight2
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer2, MSGBOX_DEFAULT
    closemessage
    setflag FLAG_YOUNGSTER_DEPARTMENT_STORE
    release
    end

LilycoveCity_DepartmentStore_4F_EventScript_YoungsterTalkToPlayerRight3::
    lockall
    playse SE_PIN
    applymovement LOCALID_YOUNGSTER, Common_Movement_ExclamationMark
    waitmovement 0
    applymovement LOCALID_YOUNGSTER, Common_Movement_FacePlayer
    waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer0, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_YOUNGSTER, LilycoveCity_DepartmentStore_4F_Movement_YoungsterApproachRight3
    waitmovement 0
    applymovement LOCALID_YOUNGSTER, Common_Movement_FacePlayer
    waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer1, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_YOUNGSTER, LilycoveCity_DepartmentStore_4F_Movement_YoungsterFollowMeRight3
    applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_DepartmentStore_4F_Movement_PlayerFollowRight3
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer2, MSGBOX_DEFAULT
    closemessage
    setflag FLAG_YOUNGSTER_DEPARTMENT_STORE
    release
    end

LilycoveCity_DepartmentStore_4F_EventScript_YoungsterTalkToPlayerLeft1::
    lockall
    setflag FLAG_HIDE_YOUNGSTER
    clearflag FLAG_HIDE_YOUNGSTER2
    removeobject LOCALID_YOUNGSTER
    addobject LOCALID_YOUNGSTER2
    playse SE_PIN
    applymovement LOCALID_YOUNGSTER2, Common_Movement_ExclamationMark
    waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer0, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_YOUNGSTER2, LilycoveCity_DepartmentStore_4F_Movement_YoungsterApproachLeft1
    waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer1, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_YOUNGSTER2, LilycoveCity_DepartmentStore_4F_Movement_YoungsterFollowMeLeft1
    applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_DepartmentStore_4F_Movement_PlayerFollowLeft1
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer2, MSGBOX_DEFAULT
    closemessage
    setflag FLAG_YOUNGSTER_DEPARTMENT_STORE
    release
    end

LilycoveCity_DepartmentStore_4F_EventScript_YoungsterTalkToPlayerLeft2::
    lockall
    playse SE_PIN
    applymovement LOCALID_YOUNGSTER, Common_Movement_ExclamationMark
    waitmovement 0
    applymovement LOCALID_YOUNGSTER, Common_Movement_FacePlayer
    waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer0, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_YOUNGSTER, LilycoveCity_DepartmentStore_4F_Movement_YoungsterApproachLeft2
    waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer1, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_YOUNGSTER, LilycoveCity_DepartmentStore_4F_Movement_YoungsterFollowMeLeft2
    applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_DepartmentStore_4F_Movement_PlayerFollowLeft2
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer2, MSGBOX_DEFAULT
    closemessage
    setflag FLAG_YOUNGSTER_DEPARTMENT_STORE
    release
    end

LilycoveCity_DepartmentStore_4F_EventScript_YoungsterTalkToPlayerLeft3::
    lockall
    setflag FLAG_HIDE_YOUNGSTER
    clearflag FLAG_HIDE_YOUNGSTER2
    removeobject LOCALID_YOUNGSTER
    addobject LOCALID_YOUNGSTER2
    playse SE_PIN
    applymovement LOCALID_YOUNGSTER2, Common_Movement_ExclamationMark
    waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer0, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_YOUNGSTER2, LilycoveCity_DepartmentStore_4F_Movement_YoungsterApproachLeft3
    waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer1, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_YOUNGSTER2, LilycoveCity_DepartmentStore_4F_Movement_YoungsterFollowMeLeft3
    applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_DepartmentStore_4F_Movement_PlayerFollowLeft3
    waitmovement 0
    msgbox LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer2, MSGBOX_DEFAULT
    closemessage
    setflag FLAG_YOUNGSTER_DEPARTMENT_STORE
    release
    end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs:
	.2byte ITEM_TM38  @ Fire Blast
	.2byte ITEM_TM25  @ Thunder
	.2byte ITEM_TM14  @ Blizzard
	.2byte ITEM_TM15  @ Hyper Beam
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkMiddle::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_EvolutionStones
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_EvolutionStones:
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_UPGRADE
	.2byte ITEM_PROTECTOR
	.2byte ITEM_ELECTIRIZER
	.2byte ITEM_MAGMARIZER
	.2byte ITEM_DUBIOUS_DISC
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_PRISM_SCALE
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_SACHET
	.2byte ITEM_OVAL_STONE
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs:
	.2byte ITEM_TM17  @ Protect
	.2byte ITEM_TM20  @ Safeguard
	.2byte ITEM_TM33  @ Reflect
	.2byte ITEM_TM16  @ Light Screen
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_Movement_YoungsterApproachMiddle2:
    walk_up
    walk_right
    walk_in_place_faster_up
    step_end

LilycoveCity_DepartmentStore_4F_Movement_YoungsterApproachMiddle3:
    walk_up
    walk_left
    walk_in_place_faster_up
    step_end

LilycoveCity_DepartmentStore_4F_Movement_YoungsterApproachRight1:
    walk_in_place_faster_right
    walk_right
    walk_right
    walk_right
    walk_in_place_faster_up
    step_end

LilycoveCity_DepartmentStore_4F_Movement_YoungsterApproachRight2:
    walk_in_place_faster_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_up
    step_end

LilycoveCity_DepartmentStore_4F_Movement_YoungsterApproachRight3:
    walk_in_place_faster_right
    walk_right
    walk_right
    walk_up
    step_end

LilycoveCity_DepartmentStore_4F_Movement_YoungsterApproachLeft1:
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_in_place_faster_up
    step_end

LilycoveCity_DepartmentStore_4F_Movement_YoungsterApproachLeft2:
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_up
    step_end

LilycoveCity_DepartmentStore_4F_Movement_YoungsterApproachLeft3:
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_up
    step_end

LilycoveCity_DepartmentStore_4F_Movement_YoungsterFollowMeMiddle1:
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_in_place_faster_right
    step_end

LilycoveCity_DepartmentStore_4F_Movement_YoungsterFollowMeMiddle2:
    walk_down
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_in_place_faster_right
    step_end

LilycoveCity_DepartmentStore_4F_Movement_YoungsterFollowMeMiddle3:
    walk_down
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_in_place_faster_right
    step_end

LilycoveCity_DepartmentStore_4F_Movement_YoungsterFollowMeRight1:
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_in_place_faster_right
    step_end

LilycoveCity_DepartmentStore_4F_Movement_YoungsterFollowMeRight2:
    walk_down
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_in_place_faster_right
    step_end

LilycoveCity_DepartmentStore_4F_Movement_YoungsterFollowMeRight3:
    walk_down
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_in_place_faster_right
    step_end

LilycoveCity_DepartmentStore_4F_Movement_YoungsterFollowMeLeft1:
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_in_place_faster_left
    step_end

LilycoveCity_DepartmentStore_4F_Movement_YoungsterFollowMeLeft2:
    walk_down
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_in_place_faster_left
    step_end

LilycoveCity_DepartmentStore_4F_Movement_YoungsterFollowMeLeft3:
    walk_down
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_in_place_faster_left
    step_end

LilycoveCity_DepartmentStore_4F_Movement_PlayerFollowMiddle1:
    delay_16
    walk_down
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    step_end

LilycoveCity_DepartmentStore_4F_Movement_PlayerFollowMiddle2:
    delay_16
    walk_down
    walk_down
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    step_end

LilycoveCity_DepartmentStore_4F_Movement_PlayerFollowMiddle3:
    delay_16
    walk_down
    walk_down
    walk_left
    walk_left
    walk_left
    walk_left
    step_end

LilycoveCity_DepartmentStore_4F_Movement_PlayerFollowRight1:
    delay_16
    walk_down
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    step_end

LilycoveCity_DepartmentStore_4F_Movement_PlayerFollowRight2:
    delay_16
    walk_down
    walk_down
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    step_end

LilycoveCity_DepartmentStore_4F_Movement_PlayerFollowRight3:
    delay_16
    walk_down
    walk_down
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    step_end

LilycoveCity_DepartmentStore_4F_Movement_PlayerFollowLeft1:
    delay_16
    walk_down
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    step_end

LilycoveCity_DepartmentStore_4F_Movement_PlayerFollowLeft2:
    delay_16
    walk_down
    walk_down
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    step_end

LilycoveCity_DepartmentStore_4F_Movement_PlayerFollowLeft3:
    delay_16
    walk_down
    walk_down
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    step_end

LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM:
	.string "Hmm…\p"
	.string "An attacking move…\n"
	.string "Or a defensive move…\p"
	.string "It's no easy matter to decide which TM\n"
	.string "moves should be taught to POKéMON…$"

LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs:
	.string "There are so many different kinds of\n"
	.string "TM moves.\p"
	.string "A catalog I read said there are fifty\n"
	.string "different kinds.$"

LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves:
	.string "I'd like to get all the different TMs,\n"
	.string "but a POKéMON learns only four moves.$"

LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer0:
    .string "Hey, wait!$"

LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer1:
    .string "Hello! Are you new here? If you have\n"
	.string "not heard yet, there is a new store\p"
	.string "on this floor. Come on, take a look.$"

LilycoveCity_DepartmentStore_4F_Text_YoungsterTalkToPlayer2:
    .string "Right here. This lady in the middle\n"
	.string "here sells all kind of stones for\p"
	.string "POKéMON. I think they are for\n"
	.string "EVOLUTION!$"
