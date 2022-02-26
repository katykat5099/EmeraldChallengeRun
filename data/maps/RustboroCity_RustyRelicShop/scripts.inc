RustboroCity_RustyRelicShop_MapScripts::
	.byte 0

RustboroCity_RustyRelicShop_EventScript_Clerk::
	lock
	faceplayer
	msgbox RustboroCity_RustyRelicShop_Text_Clerk, MSGBOX_DEFAULT
	waitmessage
	goto_if_unset FLAG_DEFEATED_MOSSDEEP_GYM, RustboroCity_RustyRelicShop_EventScript_SellFakes
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, RustboroCity_RustyRelicShop_EventScript_PossibleSellReal
	end

RustboroCity_RustyRelicShop_EventScript_SellFakes::
	pokemart RustboroCity_RustyRelicShop_Pokemart_Fakes
	msgbox RustboroCity_RustyRelicShop_Text_Leave, MSGBOX_DEFAULT
	release
	end

RustboroCity_RustyRelicShop_EventScript_PossibleSellReal::
	goto_if_unset FLAG_RUSTED_SWORD_OBTAINED, RustboroCity_RustyRelicShop_EventScript_RustedSwordNotObtained
	goto_if_unset FLAG_RUSTED_SHIELD_OBTAINED, RustboroCity_RustyRelicShop_EventScript_BuyShieldReal
	pokemart RustboroCity_RustyRelicShop_Pokemart_Fakes
	msgbox RustboroCity_RustyRelicShop_Text_Leave, MSGBOX_DEFAULT
	release
	end

RustboroCity_RustyRelicShop_EventScript_RustedSwordNotObtained::
	goto_if_unset FLAG_RUSTED_SHIELD_OBTAINED, RustboroCity_RustyRelicShop_EventScript_BuyBothReal
	goto_if_set FLAG_RUSTED_SHIELD_OBTAINED, RustboroCity_RustyRelicShop_EventScript_BuySwordReal
	msgbox RustboroCity_RustyRelicShop_Text_Debug, MSGBOX_DEFAULT
	release
	end

RustboroCity_RustyRelicShop_EventScript_BuyBothReal::
	pokemart RustboroCity_RustyRelicShop_Pokemart_Real
	msgbox RustboroCity_RustyRelicShop_Text_Leave, MSGBOX_DEFAULT
	checkitem ITEM_RUSTED_SWORD
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_RustyRelicShop_EventScript_SetFlagSword
	checkitem ITEM_RUSTED_SHIELD
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_RustyRelicShop_EventScript_SetFlagShield
	release
	end

RustboroCity_RustyRelicShop_EventScript_BuySwordReal::
	pokemart RustboroCity_RustyRelicShop_Pokemart_BuySwordReal
	msgbox RustboroCity_RustyRelicShop_Text_Leave, MSGBOX_DEFAULT
	checkitem ITEM_RUSTED_SWORD
    goto_if_eq VAR_RESULT, TRUE, RustboroCity_RustyRelicShop_EventScript_SetFlagSword
	release
	end

RustboroCity_RustyRelicShop_EventScript_BuyShieldReal::
	pokemart RustboroCity_RustyRelicShop_Pokemart_BuyShieldReal
	msgbox RustboroCity_RustyRelicShop_Text_Leave, MSGBOX_DEFAULT
	checkitem ITEM_RUSTED_SHIELD
    goto_if_eq VAR_RESULT, TRUE, RustboroCity_RustyRelicShop_EventScript_SetFlagShield
	release
	end

RustboroCity_RustyRelicShop_EventScript_SetFlagSword::
    setflag FLAG_RUSTED_SWORD_OBTAINED
    release
    end

RustboroCity_RustyRelicShop_EventScript_SetFlagShield::
    setflag FLAG_RUSTED_SHIELD_OBTAINED
    release
    end

	.align 2
RustboroCity_RustyRelicShop_Pokemart_Fakes:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_NONE
	release
	end

	.align 2
RustboroCity_RustyRelicShop_Pokemart_Real:
	.2byte ITEM_RUSTED_SWORD
	.2byte ITEM_RUSTED_SHIELD
	.2byte ITEM_NONE
	release
	end

	.align 2
RustboroCity_RustyRelicShop_Pokemart_BuySwordReal:
    .2byte ITEM_RUSTED_SWORD
    .2byte ITEM_POTION
    .2byte ITEM_NONE
	release
	end

	.align 2
RustboroCity_RustyRelicShop_Pokemart_BuyShieldReal:
	.2byte ITEM_POKE_BALL
    .2byte ITEM_RUSTED_SHIELD
    .2byte ITEM_NONE
	release
	end

RustboroCity_RustyRelicShop_Text_Clerk:
    .string "Welcome…\n"
    .string "Here to buy some relics?…\p"
    .string "We've got plenty…$"


RustboroCity_RustyRelicShop_Text_Leave:
    .string "…\n"
    .string "Goodbye…$"

RustboroCity_RustyRelicShop_Text_Debug:
    .string "Debug\n"
    .string "Message$"

