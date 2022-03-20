GraniteCave_B2F_MapScripts::
	.byte 0

GraniteCave_EventScript_HexTwin1::
    goto_if_set FLAG_DEFEATED_PETALBURG_GYM, GraniteCave_EventScript_HexTwin1Check
	msgbox GraniteCave_Text_HexTwin, MSGBOX_NPC
	end

GraniteCave_EventScript_HexTwin1Check::
    goto_if_set FLAG_RECEIVED_MAWILITE, GraniteCave_EventScript_HexTwin1Got
    specialvar VAR_RESULT, CheckPartyMawile
    goto_if_eq VAR_RESULT, TRUE, GraniteCave_EventScript_HexTwin1Get
    msgbox GraniteCave_Text_HexTwin, MSGBOX_NPC
    end

GraniteCave_EventScript_HexTwin1Get::
    lock
    faceplayer
    msgbox GraniteCave_Text_HexTwin1Get, MSGBOX_DEFAULT
    giveitem ITEM_MAWILITE
    setflag FLAG_RECEIVED_MAWILITE
    release
    end

GraniteCave_EventScript_HexTwin1Got::
    msgbox GraniteCave_Text_HexTwin, MSGBOX_NPC
    end

GraniteCave_EventScript_HexTwin2::
    goto_if_set FLAG_DEFEATED_PETALBURG_GYM, GraniteCave_EventScript_HexTwin2Check
	msgbox GraniteCave_Text_HexTwin, MSGBOX_NPC
	end

GraniteCave_EventScript_HexTwin2Check::
    goto_if_set FLAG_RECEIVED_SABLENITE, GraniteCave_EventScript_HexTwin2Got
    specialvar VAR_RESULT, CheckPartySableye
    goto_if_eq VAR_RESULT, TRUE, GraniteCave_EventScript_HexTwin2Get
    msgbox GraniteCave_Text_HexTwin, MSGBOX_NPC
    end

GraniteCave_EventScript_HexTwin2Get::
    lock
    faceplayer
    msgbox GraniteCave_Text_HexTwin2Get, MSGBOX_DEFAULT
    giveitem ITEM_SABLENITE
    setflag FLAG_RECEIVED_SABLENITE
    release
    end

GraniteCave_EventScript_HexTwin2Got::
    msgbox GraniteCave_Text_HexTwin, MSGBOX_NPC
    end

GraniteCave_Text_HexTwin:
    .string "…$"

GraniteCave_Text_HexTwin1Get:
    .string "Yes, MAWILE.\p"
    .string "MAWILE get.$"

GraniteCave_Text_HexTwin2Get:
    .string "Yes, SABLEYE.\p"
    .string "SABLEYE get.$"

