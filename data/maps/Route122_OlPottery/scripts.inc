Route122_OlPottery_MapScripts::
	.byte 0

Route122_OlPottery_EventScript_PotteryClerk::
	lock
	faceplayer
	msgbox Route122_OlPottery_Text_PotteryClerk, MSGBOX_DEFAULT
	waitmessage
	pokemart Route122_OlPottery_Pokemart_PotteryShop
	msgbox Route122_OlPottery_Text_LeaveShop, MSGBOX_DEFAULT
	release
	end

Route122_OlPottery_EventScript_PotteryMaker::
	faceplayer
	msgbox Route122_OlPottery_Text_PotteryMaker, MSGBOX_DEFAULT
	end

	.align 2
Route122_OlPottery_Pokemart_PotteryShop:
	.2byte ITEM_CRACKED_POT
	.2byte ITEM_CHIPPED_POT
	.2byte ITEM_NONE
	release
	end

Route122_OlPottery_EventScript_BanetteMega::
    goto_if_set FLAG_DEFEATED_PETALBURG_GYM, Route122_OlPottery_EventScript_BanetteMegaCheck
	msgbox Route122_OlPottery_Text_BanetteMega, MSGBOX_NPC
	end

Route122_OlPottery_EventScript_BanetteMegaCheck::
    goto_if_set FLAG_RECEIVED_BANETTITE, Route122_OlPottery_EventScript_BanetteMegaGot
    specialvar VAR_RESULT, CheckPartyBanette
    goto_if_eq VAR_RESULT, TRUE, Route122_OlPottery_EventScript_BanetteMegaGet
    msgbox Route122_OlPottery_Text_BanetteMega, MSGBOX_NPC
    end

Route122_OlPottery_EventScript_BanetteMegaGet::
    lock
    faceplayer
    msgbox Route122_OlPottery_Text_BanetteMegaGet, MSGBOX_DEFAULT
    giveitem ITEM_BANETTITE
    setflag FLAG_RECEIVED_BANETTITE
    release
    end

Route122_OlPottery_EventScript_BanetteMegaGot::
    msgbox Route122_OlPottery_Text_BanetteMegaGot, MSGBOX_NPC
    end

Route122_OlPottery_Text_BanetteMega:
    .string "Hello. What do you think about\n"
    .string "GHOST POKéMON? Eheh…$"

Route122_OlPottery_Text_BanetteMegaGet:
    .string "I see you're one with the CURSE\n"
    .string "too… Let's make that one stronger…$"

Route122_OlPottery_Text_BanetteMegaGot:
    .string "Kekeke…$"

Route122_OlPottery_Text_PotteryClerk:
	.string "What can I help you with?$"

Route122_OlPottery_Text_LeaveShop:
    .string "See you soon!$"

Route122_OlPottery_Text_PotteryMaker:
    .string "Making pottery is a lot of\n"
    .string "fun, but so is finding it!$"
