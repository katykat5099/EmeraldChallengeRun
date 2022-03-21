FortreeCity_House3_MapScripts::
	.byte 0

FortreeCity_House3_EventScript_Maniac::
	msgbox FortreeCity_House3_Text_MetStevenHadAmazingPokemon, MSGBOX_NPC
	end

FortreeCity_House3_EventScript_SchoolKidM::
	msgbox FortreeCity_House3_Text_OhYouHavePokedex, MSGBOX_NPC
	end

FortreeCity_House3_EventScript_BugCatcher::
    goto_if_set FLAG_DEFEATED_PETALBURG_GYM, FortreeCity_House3_EventScript_BugCatcherCheck
	msgbox FortreeCity_House3_Text_BugCatcher, MSGBOX_NPC
	end

FortreeCity_House3_EventScript_BugCatcherCheck::
    goto_if_set FLAG_RECEIVED_SCIZORITE, FortreeCity_House3_EventScript_BugCatcherGot
    specialvar VAR_RESULT, CheckPartyScizor
    goto_if_eq VAR_RESULT, TRUE, FortreeCity_House3_EventScript_BugCatcherGet
    msgbox FortreeCity_House3_Text_BugCatcher, MSGBOX_NPC
    end

FortreeCity_House3_EventScript_BugCatcherGet::
    lock
    faceplayer
    msgbox FortreeCity_House3_Text_BugCatcherGet, MSGBOX_DEFAULT
    giveitem ITEM_SCIZORITE
    setflag FLAG_RECEIVED_SCIZORITE
    release
    end

FortreeCity_House3_EventScript_BugCatcherGot::
    msgbox FortreeCity_House3_Text_BugCatcher, MSGBOX_NPC
    end

FortreeCity_House3_Text_BugCatcher:
    .string "Do you know who STEVEN is?$"

FortreeCity_House3_Text_BugCatcherGet:
    .string "Do you know who STEVEN is?\p"
    .string "My friend got a stone from him,\n"
    .string "said I might find it useful.\p"
    .string "Honestly, I don't know what it's for,\n"
    .string "Why don't you have it instead?$"

FortreeCity_House3_Text_MetStevenHadAmazingPokemon:
	.string "While speaking about POKéDEXES,\n"
	.string "I remembered something.\p"
	.string "I met this TRAINER, STEVEN, when\n"
	.string "I was searching for rare stones.\p"
	.string "Hoo, boy, he had some amazing POKéMON\n"
	.string "with him.\p"
	.string "They weren't just rare, they were\n"
	.string "trained to terrifying extremes!\p"
	.string "He might even be stronger than the\n"
	.string "GYM LEADER in this town…$"

FortreeCity_House3_Text_OhYouHavePokedex:
	.string "What's that thing you have there?\p"
	.string "… … … … … …\p"
	.string "Oh, it's called a POKéDEX?\n"
	.string "It's really awesome!$"

