Route107_AggroniteHouse_MapScripts::
	.byte 0

Route107_AggroniteHouse_EventScript_Hiker::
    goto_if_set FLAG_DEFEATED_PETALBURG_GYM, Route107_AggroniteHouse_EventScript_PetalburgGymDefeated
	msgbox Route107_AggroniteHouse_Text_Hiker, MSGBOX_NPC
	end

Route107_AggroniteHouse_EventScript_PetalburgGymDefeated::
    goto_if_set FLAG_RECEIVED_AGGRONITE, Route107_AggroniteHouse_EventScript_Hiker2
    specialvar VAR_RESULT, CheckPartyAggron
    goto_if_eq VAR_RESULT, TRUE, Route107_AggroniteHouse_EventScript_GetAggronite
    msgbox Route107_AggroniteHouse_Text_Hiker, MSGBOX_NPC
    end

Route107_AggroniteHouse_EventScript_GetAggronite::
    lock
    msgbox Route107_AggroniteHouse_Text_FreeStone, MSGBOX_DEFAULT
    giveitem ITEM_AGGRONITE
    setflag FLAG_RECEIVED_AGGRONITE
    release
    end

Route107_AggroniteHouse_EventScript_Hiker2::
    msgbox Route107_AggroniteHouse_Text_Hiker2, MSGBOX_NPC
    end

Route107_AggroniteHouse_Text_Hiker:
    .string "Hi! I have a cool stone for sale!\n"
    .string "Would you like to buy it?\p"
    .string "Only 100,000!$"

Route107_AggroniteHouse_Text_FreeStone:
    .string "You have a Mega ring!\n"
    .string "Forget what I said. Take it!$"

Route107_AggroniteHouse_Text_Hiker2:
    .string "You are very cool.$"
