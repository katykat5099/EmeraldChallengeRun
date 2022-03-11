Route118_ManectiteHouse_MapScripts::
	.byte 0

Route118_ManectiteHouse_EventScript_Man::
    lock
    faceplayer
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, Route118_ManectiteHouse_EventScript_PetalburgGymDefeated
	msgbox Route118_ManectiteHouse_Text_Man, MSGBOX_DEFAULT
	release
	end

Route118_ManectiteHouse_EventScript_PetalburgGymDefeated::
    goto_if_set FLAG_RECEIVED_MANECTITE, Route118_ManectiteHouse_EventScript_ManAlreadyRecieved
    specialvar VAR_RESULT, CheckPartyManectric
	goto_if_eq VAR_RESULT, TRUE, Route118_ManectiteHouse_EventScript_GetMegaStone
    msgbox Route118_ManectiteHouse_Text_Worthy, MSGBOX_DEFAULT
    release
    end

Route118_ManectiteHouse_EventScript_GetMegaStone::
    msgbox Route118_ManectiteHouse_Text_MegaStoneGet, MSGBOX_DEFAULT
    giveitem ITEM_MANECTITE
    setflag FLAG_RECEIVED_MANECTITE
    release
    end

Route118_ManectiteHouse_EventScript_ManAlreadyRecieved
    msgbox Route118_ManectiteHouse_Text_Man, MSGBOX_NPC
    end

Route118_ManectiteHouse_Text_Man:
	.string "What do you want?$"

Route118_ManectiteHouse_Text_Worthy:
    .string "What do you want?\p"
    .string "You're not worthy.$"

Route118_ManectiteHouse_Text_MegaStoneGet:
    .string "Take this.$"
