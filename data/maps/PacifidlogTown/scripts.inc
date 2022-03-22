PacifidlogTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
	.byte 0

PacifidlogTown_OnTransition:
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	end

PacifidlogTown_OnResume:
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
	end

PacifidlogTown_EventScript_NinjaBoy::
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Girl::
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Fisherman::
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
	end

PacifidlogTown_EventScript_TownSign::
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
	end

PacifidlogTown_EventScript_PinkNectarRichBoy::
    goto_if_set FLAG_RECEIVED_RED_NECTAR, PacifidlogTown_EventScript_PinkNectarRichBoy1
	lock
    faceplayer
    msgbox PacifidlogTown_Text_PinkNectarRichBoy, MSGBOX_DEFAULT
    giveitem ITEM_PINK_NECTAR, 5
    setflag FLAG_RECEIVED_PINK_NECTAR
    release
    end

PacifidlogTown_EventScript_PinkNectarRichBoy1::
    msgbox PacifidlogTown_Text_PinkNectarRichBoy, MSGBOX_NPC
    end

PacifidlogTown_EventScript_SharpedoMega::
    goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PacifidlogTown_EventScript_SharpedoCheck
	msgbox PacifidlogTown_Text_SharpedoMega, MSGBOX_NPC
	end

PacifidlogTown_EventScript_SharpedoCheck::
    goto_if_set FLAG_RECEIVED_SHARPEDONITE, PacifidlogTown_EventScript_SharpedoMegaGot
    specialvar VAR_RESULT, CheckPartySharpedo
    goto_if_eq VAR_RESULT, TRUE, PacifidlogTown_EventScript_SharpedoMegaGet
    msgbox PacifidlogTown_Text_SharpedoMega, MSGBOX_NPC
    end

PacifidlogTown_EventScript_SharpedoMegaGet::
    lock
    faceplayer
    msgbox PacifidlogTown_Text_SharpedoMegaGet, MSGBOX_DEFAULT
    giveitem ITEM_SHARPEDONITE
    setflag FLAG_RECEIVED_SHARPEDONITE
    release
    end

PacifidlogTown_EventScript_SharpedoMegaGot::
    msgbox PacifidlogTown_Text_SharpedoMega, MSGBOX_NPC
    end

PacifidlogTown_Text_PinkNectarRichBoy:
    .string "Do you know the POKéMON\p"
    .string "ORICORIO? They can change\l"
    .string "their dancing style just\p"
    .string "by smelling NECTAR!\n"
    .string "Try it!$"

PacifidlogTown_Text_SharpedoMega:
    .string "SHARPEDO is crazy fast. It's so\n"
    .string "useful for getting around!$"

PacifidlogTown_Text_SharpedoMegaGet:
    .string "Hey you have a MEGA RING!\n"
    .string "You probably will find this\l"
    .string "useful then!$"

PacifidlogTown_Text_FastRunningCurrent:
	.string "The sea between PACIFIDLOG and\n"
	.string "SLATEPORT has a fast-running tide.\p"
	.string "If you decide to SURF, you could end\n"
	.string "up swept away somewhere else.$"

PacifidlogTown_Text_NeatHousesOnWater:
	.string "See, isn't it neat?\n"
	.string "These houses are on water!\p"
	.string "I was born here!$"

PacifidlogTown_Text_SkyPillarTooScary:
	.string "The SKY PILLAR?\p"
	.string "…Oh, you must mean that tall, tall\n"
	.string "tower a little further out.\p"
	.string "If you asked me, I wouldn't climb it.\n"
	.string "It's too scary to get up that high.\p"
	.string "Life at sea level in PACIFIDLOG,\n"
	.string "that suits me fine.$"

PacifidlogTown_Text_TownSign:
	.string "PACIFIDLOG TOWN\p"
	.string "“Where the morning sun smiles upon\n"
	.string "the waters.”$"

