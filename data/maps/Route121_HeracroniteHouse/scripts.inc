Route121_HeracroniteHouse_MapScripts::
	.byte 0

Route121_HeracroniteHouse_EventScript_BugCatcher::
    goto_if_set FLAG_DEFEATED_PETALBURG_GYM, Route121_HeracroniteHouse_EventScript_BugCatcherCheck
	msgbox Route121_HeracroniteHouse_Text_BugCatcher, MSGBOX_NPC
	end

Route121_HeracroniteHouse_EventScript_BugCatcherCheck::
    goto_if_set FLAG_RECEIVED_HERACRONITE, Route121_HeracroniteHouse_EventScript_BugCatcherReceivedMegaStone
    specialvar VAR_RESULT, CheckPartyHeracross
    goto_if_eq VAR_RESULT, TRUE, Route121_HeracroniteHouse_EventScript_BugCatcherGiveMegaStone
    msgbox Route121_HeracroniteHouse_Text_BugCatcher, MSGBOX_NPC
    end

Route121_HeracroniteHouse_EventScript_BugCatcherGiveMegaStone::
    lock
    faceplayer
    msgbox Route121_HeracroniteHouse_Text_BugCatcherGiveMegaStone, MSGBOX_DEFAULT
    giveitem ITEM_HERACRONITE
    setflag FLAG_RECEIVED_HERACRONITE
    release
    end

Route121_HeracroniteHouse_EventScript_BugCatcherReceivedMegaStone::
    msgbox Route121_HeracroniteHouse_Text_BugCatcherReceivedMegaStone, MSGBOX_NPC
    end

Route121_HeracroniteHouse_EventScript_BugCatcherMom::
    msgbox Route121_HeracroniteHouse_Text_BugCatcherMom, MSGBOX_NPC
    end

Route121_HeracroniteHouse_Text_BugCatcher:
    .string "Do you like BUG POKéMON?\p"
    .string "BUG POKéMON are so cool.\n"
    .string "I like the SAFARI ZONE because\p"
    .string "I can find rare BUG POKéMON$"

Route121_HeracroniteHouse_Text_BugCatcherGiveMegaStone:
    .string "Woah!\p"
    .string "You have a HERACROSS!\n"
    .string "Wow!!\p"
    .string "You also have a MEGA RING!\n"
    .string "You are SO cool! I know,\p"
    .string "you can have my special HERACROSS\n"
    .string "stone!$"

Route121_HeracroniteHouse_Text_BugCatcherReceivedMegaStone:
    .string "Do you love the HERACROSS stone?$"

Route121_HeracroniteHouse_Text_BugCatcherMom:
    .string "My kid loves BUG POKéMON.\p"
    .string "He collects everything BUG TYPE.\n"
    .string "POKéMON, POKéBALLS, Stones, you name it.$"
