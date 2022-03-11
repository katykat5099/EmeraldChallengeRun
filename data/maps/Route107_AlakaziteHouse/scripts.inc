Route107_AlakaziteHouse_MapScripts::
	.byte 0

Route107_AlakaziteHouse_EventScript_Woman::
	msgbox Route107_AlakaziteHouse_Text_Woman, MSGBOX_NPC
	end

Route107_AlakaziteHouse_EventScript_Zigzagoon1::
    goto_if_set FLAG_DEFEATED_PETALBURG_GYM, Route107_AlakaziteHouse_EventScript_Zigzagoon2
	msgbox Route107_AlakaziteHouse_Text_Zigzagoon1, MSGBOX_NPC
	end

Route107_AlakaziteHouse_EventScript_Zigzagoon2::
    specialvar VAR_RESULT, CheckPartyAlakazam
    goto_if_eq VAR_RESULT, TRUE, Route107_AlakaziteHouse_EventScript_Zigzagoon3
    msgbox Route107_AlakaziteHouse_Text_Zigzagoon1, MSGBOX_NPC
    end

Route107_AlakaziteHouse_EventScript_Zigzagoon3::
    lock
    msgbox Route107_AlakaziteHouse_Text_Zigzagoon2, MSGBOX_DEFAULT
    giveitem ITEM_ALAKAZITE
    setflag FLAG_RECEIVED_ALAKAZITE
    release
    end

Route107_AlakaziteHouse_Text_Woman:
    .string "Oh. Welcome.\p"
    .string "Do you know about the pickup\n"
    .string "ability? My Zigzagoon has it.\p"
    .string "Talk to your pokemon often and\n"
    .string "they will give you items.$"

Route107_AlakaziteHouse_Text_Zigzagoon1:
    .string "Grraar!$"

Route107_AlakaziteHouse_Text_Zigzagoon2:
    .string "Grraar!\p"
    .string "The ZIGZAGOON appears to want to\n"
    .string "give you something.$"
