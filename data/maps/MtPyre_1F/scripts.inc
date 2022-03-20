MtPyre_1F_MapScripts::
	.byte 0

MtPyre_1F_EventScript_GengarMega::
    goto_if_set FLAG_DEFEATED_PETALBURG_GYM, MtPyre_1F_EventScript_GengarMegaCheck
	msgbox MtPyre_1F_Text_GengarMega, MSGBOX_NPC
	end

MtPyre_1F_EventScript_GengarMegaCheck::
    goto_if_set FLAG_RECEIVED_GENGARITE, MtPyre_1F_EventScript_GengarMegaGot
    specialvar VAR_RESULT, CheckPartyGengar
    goto_if_eq VAR_RESULT, TRUE, MtPyre_1F_EventScript_GengarMegaGet
    msgbox MtPyre_1F_Text_GengarMega, MSGBOX_NPC
    end

MtPyre_1F_EventScript_GengarMegaGet::
    lock
    faceplayer
    msgbox MtPyre_1F_Text_GengarMegaGet, MSGBOX_DEFAULT
    giveitem ITEM_GENGARITE
    setflag FLAG_RECEIVED_GENGARITE
    release
    end

MtPyre_1F_EventScript_GengarMegaGot::
    msgbox MtPyre_1F_Text_GengarMega, MSGBOX_NPC
    end

MtPyre_1F_EventScript_CleanseTagWoman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_CLEANSE_TAG, MtPyre_1F_EventScript_ReceivedCleanseTag
	msgbox MtPyre_1F_Text_TakeThisForYourOwnGood, MSGBOX_DEFAULT
	giveitem ITEM_CLEANSE_TAG
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_CLEANSE_TAG
	release
	end

MtPyre_1F_EventScript_ReceivedCleanseTag::
	msgbox MtPyre_1F_Text_ExplainCleanseTag, MSGBOX_DEFAULT
	release
	end

MtPyre_1F_EventScript_PokefanF::
	msgbox MtPyre_1F_Text_ComeToPayRespects, MSGBOX_NPC
	end

MtPyre_1F_EventScript_Man::
	msgbox MtPyre_1F_Text_RestingPlaceOfZigzagoon, MSGBOX_NPC
	end

MtPyre_1F_Text_TakeThisForYourOwnGood:
	.string "All sorts of beings wander the slopes\n"
	.string "of MT. PYRE…\p"
	.string "There is no telling what may happen.\n"
	.string "Take this. It's for your own good.$"

MtPyre_1F_Text_ExplainCleanseTag:
	.string "Have a POKéMON hold that\n"
	.string "CLEANSE TAG.\p"
	.string "It will help ward off wild POKéMON.$"

MtPyre_1F_Text_ComeToPayRespects:
	.string "Did you come to pay your respect\n"
	.string "to the spirits of departed POKéMON?\p"
	.string "You must care for your POKéMON a lot.$"

MtPyre_1F_Text_RestingPlaceOfZigzagoon:
	.string "This is the final resting place of my\n"
	.string "ZIGZAGOON. I cherished it…$"

MtPyre_1F_Text_GengarMega:
    .string "Beware of GENGAR.$"

MtPyre_1F_Text_GengarMegaGet:
    .string "He-he, I wont play any tricks on\n"
    .string "you. Here, have this.$"

