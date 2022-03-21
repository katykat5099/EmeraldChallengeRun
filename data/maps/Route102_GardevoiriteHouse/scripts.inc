Route102_GardevoiriteHouse_MapScripts::
	.byte 0

Route102_GardevoiriteHouse_EventScript_Woman::
    goto_if_set FLAG_DEFEATED_PETALBURG_GYM, Route102_GardevoiriteHouse_EventScript_RaltsHoarder
	msgbox Route102_GardevoiriteHouse_Text_Woman, MSGBOX_NPC
	end

Route102_GardevoiriteHouse_EventScript_RaltsHoarder::
    goto_if_set FLAG_RECEIVED_GARDEVOIRITE, Route102_GardevoiriteHouse_EventScript_GardevoiriteGot
    specialvar VAR_RESULT, CheckPartyGardevoir
    goto_if_eq VAR_RESULT, TRUE, Route102_GardevoiriteHouse_EventScript_GardevoiriteGet
    msgbox Route102_GardevoiriteHouse_Text_Woman, MSGBOX_NPC
    end

Route102_GardevoiriteHouse_EventScript_GardevoiriteGet::
    lock
    faceplayer
    msgbox Route102_GardevoiriteHouse_Text_GardevoiriteGive, MSGBOX_DEFAULT
    giveitem ITEM_GARDEVOIRITE
    setflag FLAG_RECEIVED_GARDEVOIRITE
    release
    end

Route102_GardevoiriteHouse_EventScript_GardevoiriteGot::
    msgbox Route102_GardevoiriteHouse_Text_GardevoiriteGot, MSGBOX_NPC
    end

Route102_GardevoiriteHouse_Text_Woman:
    .string "Ralts is so rare, every time I see one\n"
    .string "I catch it!$"

Route102_GardevoiriteHouse_Text_GardevoiriteGive:
    .string "I see you have a GARDEVOIR.\p"
    .string "You need a GARDEVOIR to get a\n"
    .string "new RALTS, here, take this.$"

Route102_GardevoiriteHouse_Text_GardevoiriteGot:
    .string "Tee-hee.\p"
    .string "I LOVE RALTS!$"
