Route102_VenusauriteHouse_MapScripts::
	.byte 0

Route102_VenusauriteHouse_EventScript_OldMan::
    goto_if_set FLAG_DEFEATED_PETALBURG_GYM, Route102_VenusauriteHouse_EventScript_VenusaurCheck
	msgbox Route102_VenusauriteHouse_Text_OldMan, MSGBOX_NPC
	end

Route102_VenusauriteHouse_EventScript_VenusaurCheck::
    goto_if_set FLAG_RECEIVED_VENUSAURITE, Route102_VenusauriteHouse_EventScript_VenusauriteGot
    specialvar VAR_RESULT, CheckPartyVenusaur
    goto_if_eq VAR_RESULT, TRUE, Route102_VenusauriteHouse_EventScript_VenusauriteGet
    msgbox Route107_AlakaziteHouse_Text_Woman, MSGBOX_NPC
    end

Route102_VenusauriteHouse_EventScript_VenusauriteGet::
    lock
    faceplayer
    msgbox Route102_VenusauriteHouse_Text_VenusauriteGet, MSGBOX_DEFAULT
    giveitem ITEM_VENUSAURITE
    setflag FLAG_RECEIVED_VENUSAURITE
    release
    end

Route102_VenusauriteHouse_EventScript_VenusauriteGot:
    msgbox Route102_VenusauriteHouse_Text_VenusauriteGot, MSGBOX_NPC
    end

Route102_VenusauriteHouse_Text_OldMan:
    .string "Have you ever been to KANTO?\p"
    .string "Of The three starter POKeMON\l"
    .string "every new trainer gets to\n"
    .string "choose either SQUIRTLE,\p"
    .string "BULBASAUR or CHARMANDER.\l"
    .string "I specialize in BULBASAUR.$"

Route102_VenusauriteHouse_Text_VenusauriteGet:
    .string "So I see you chose BULBASAUR.\p"
    .string "Well, you're never complete\n"
    .string "without having the MEGA STONE.\p"
    .string "Take it.$"

Route102_VenusauriteHouse_Text_VenusauriteGot:
    .string "I hope your BULBASAUR\p"
    .string "becomes a very strong\l"
    .string "VENUSAUR some day.$"
