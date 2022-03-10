Route114_SteelixiteHouse_MapScripts::
	.byte 0

Route114_SteelixiteHouse_EventScript_FatMan::
    goto_if_set FLAG_DEFEATED_PETALBURG_GYM, Route114_SteelixiteHouse_EventScript_PetalburgGymDefeated
	msgbox Route114_SteelixiteHouse_Text_FatMan, MSGBOX_NPC
	end

Route114_SteelixiteHouse_EventScript_PetalburgGymDefeated::
    specialvar VAR_RESULT, CheckPartySteelix
	goto_if_eq VAR_RESULT, TRUE, Route114_SteelixiteHouse_EventScript_GetSteelixite
    msgbox Route114_SteelixiteHouse_Text_PleaseTakeIt, MSGBOX_DEFAULT
    release
    end

Route114_SteelixiteHouse_EventScript_GetSteelixite::
    giveitem ITEM_STEELIXITE
    setflag FLAG_RECEIVED_STEELIXITE
    release
    end

Route114_SteelixiteHouse_Text_FatMan:
    .string "I feel so sick…\n"

Route114_SteelixiteHouse_Text_PleaseTakeIt:
    .string "This stone is very precious to\n"
    .string "me.\p"
    .string "I want it to go to someone who\n"
    .string "can make good use of it…\p"
    .string "Please, you, take it.$"
