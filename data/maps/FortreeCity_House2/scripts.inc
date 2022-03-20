FortreeCity_House2_MapScripts::
	.byte 0

FortreeCity_House2_EventScript_HiddenPowerGiver::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM10, FortreeCity_House2_EventScript_ExplainHiddenPower
	call_if_unset FLAG_MET_HIDDEN_POWER_GIVER, FortreeCity_House2_EventScript_Greeting
	msgbox FortreeCity_House2_Text_CoinInWhichHand, MSGBOX_DEFAULT
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
	switch VAR_RESULT
	case 1, FortreeCity_House2_EventScript_WrongGuess
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand, MSGBOX_DEFAULT
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
	switch VAR_RESULT
	case 1, FortreeCity_House2_EventScript_WrongGuess
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand2, MSGBOX_DEFAULT
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
	switch VAR_RESULT
	case 0, FortreeCity_House2_EventScript_WrongGuess
	msgbox FortreeCity_House2_Text_YourHiddenPowerHasAwoken, MSGBOX_DEFAULT
	giveitem ITEM_TM10
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM10
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_Greeting::
	msgbox FortreeCity_House2_Text_HiddenPowersArousedByNature, MSGBOX_DEFAULT
	setflag FLAG_MET_HIDDEN_POWER_GIVER
	return

FortreeCity_House2_EventScript_ExplainHiddenPower::
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_WrongGuess::
	msgbox FortreeCity_House2_Text_YouGuessedWrong, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_PidgeotLittleGirl::
    goto_if_set FLAG_DEFEATED_PETALBURG_GYM, FortreeCity_House2_EventScript_PidgeotLittleGirlCheck
	msgbox FortreeCity_House2_Text_PidgeotLittleGirl, MSGBOX_NPC
	end

FortreeCity_House2_EventScript_PidgeotLittleGirlCheck::
    goto_if_set FLAG_RECEIVED_PIDGEOTITE, FortreeCity_House2_EventScript_PidgeotLittleGirlGot
    specialvar VAR_RESULT, CheckPartyPidgeot
    goto_if_eq VAR_RESULT, TRUE, FortreeCity_House2_EventScript_PidgeotLittleGirlGet
    msgbox FortreeCity_House2_Text_PidgeotLittleGirl, MSGBOX_NPC
    end

FortreeCity_House2_EventScript_PidgeotLittleGirlGet::
    lock
    faceplayer
    msgbox FortreeCity_House2_Text_PidgeotLittleGirlGet, MSGBOX_DEFAULT
    giveitem ITEM_PIDGEOTITE
    setflag FLAG_RECEIVED_PIDGEOTITE
    release
    end

FortreeCity_House2_EventScript_PidgeotLittleGirlGot::
    msgbox FortreeCity_House2_Text_PidgeotLittleGirlGot, MSGBOX_NPC
    end

FortreeCity_House2_Text_PidgeotLittleGirl:
    .string "I like collecting many kinds of\n"
    .string "pretty stones and give them to people.$"

FortreeCity_House2_Text_PidgeotLittleGirlGet:
    .string "I like collecting many kinds of\n"
    .string "pretty stones and give them to people.\l"
    .string "Here, you can have this one.$"

FortreeCity_House2_Text_PidgeotLittleGirlGot:
    .string "Teehee, I hope you like your new\n"
    .string "stone!\p"

FortreeCity_House2_Text_HiddenPowersArousedByNature:
	.string "People… POKéMON…\p"
	.string "Their hidden powers are aroused by\n"
	.string "living in natural environments…$"

FortreeCity_House2_Text_CoinInWhichHand:
	.string "Let this old woman see if your hidden\n"
	.string "power has awoken…\p"
	.string "I hold a coin in my hand.\p"
	.string "Now, tell me, have I palmed it in\n"
	.string "the right hand? Or in the left?$"

FortreeCity_House2_Text_CorrectTryAgainWhichHand:
	.string "Oh! Yes, correct!\p"
	.string "We shall try again.\p"
	.string "In which hand have I palmed the coin?\n"
	.string "The right or left?$"

FortreeCity_House2_Text_CorrectTryAgainWhichHand2:
	.string "Oh! Yes, correct!\p"
	.string "We shall try again.\p"
	.string "In which hand have I palmed the coin?\n"
	.string "The right or left?$"

FortreeCity_House2_Text_YourHiddenPowerHasAwoken:
	.string "Oh! Splendid!\n"
	.string "Your hidden power has awoken!\p"
	.string "Here, take this and awaken the hidden\n"
	.string "power of your POKéMON.$"

FortreeCity_House2_Text_ExplainHiddenPower:
	.string "HIDDEN POWER is a move that changes\n"
	.string "with the POKéMON.$"

FortreeCity_House2_Text_YouGuessedWrong:
	.string "No, too bad.\n"
	.string "You guessed wrong.$"

