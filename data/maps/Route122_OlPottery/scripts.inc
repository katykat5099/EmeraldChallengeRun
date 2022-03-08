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

Route122_OlPottery_Text_PotteryClerk:
	.string "What can I help you with?$"

Route122_OlPottery_Text_LeaveShop:
    .string "See you soon!$"

Route122_OlPottery_Text_PotteryMaker:
    .string "Making pottery is a lot of\n"
    .string "fun, but so is finding it!$"