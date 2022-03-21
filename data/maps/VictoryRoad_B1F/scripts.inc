VictoryRoad_B1F_MapScripts::
	.byte 0

VictoryRoad_B1F_EventScript_MegaHiker::
    goto_if_set FLAG_DEFEATED_PETALBURG_GYM, VictoryRoad_B1F_EventScript_MegaHikerCheck
	msgbox VictoryRoad_B1F_Text_MegaHiker, MSGBOX_NPC
	end

VictoryRoad_B1F_EventScript_MegaHikerCheck::
    goto_if_set FLAG_RECEIVED_LATIOSITE, Route107_AggroniteHouse_EventScript_Hiker2
    goto_if_set FLAG_RECEIVED_LATIASITE, Route107_AggroniteHouse_EventScript_Hiker2
    goto_if_set FLAG_RECEIVED_MEWTWONITE, Route107_AggroniteHouse_EventScript_Hiker2
    specialvar VAR_RESULT, CheckPartyLatios
    goto_if_eq VAR_RESULT, TRUE, VictoryRoad_B1F_EventScript_MegaHikerGiveLatios
    specialvar VAR_RESULT, CheckPartyLatias
    goto_if_eq VAR_RESULT, TRUE, VictoryRoad_B1F_EventScript_MegaHikerGiveLatias
    specialvar VAR_RESULT, CheckPartyMewtwo
    goto_if_eq VAR_RESULT, TRUE, VictoryRoad_B1F_EventScript_MegaHikerGiveMewtwo
    msgbox VictoryRoad_B1F_Text_MegaHiker, MSGBOX_NPC
    end

VictoryRoad_B1F_EventScript_MegaHikerGiveLatios::
    lock
    msgbox VictoryRoad_B1F_Text_MegaHikerGive, MSGBOX_DEFAULT
    giveitem ITEM_LATIOSITE
    setflag FLAG_RECEIVED_LATIOSITE
    release
    end

VictoryRoad_B1F_EventScript_MegaHikerGiveLatias::
    lock
    msgbox VictoryRoad_B1F_Text_MegaHikerGive, MSGBOX_DEFAULT
    giveitem ITEM_LATIASITE
    setflag FLAG_RECEIVED_LATIASITE
    release
    end

VictoryRoad_B1F_EventScript_MegaHikerGiveMewtwo::
    lock
    msgbox VictoryRoad_B1F_Text_MegaHikerGive, MSGBOX_DEFAULT
    giveitem ITEM_MEWTWONITE_X
    giveitem ITEM_MEWTWONITE_Y
    setflag FLAG_RECEIVED_MEWTWONITE
    release
    end

VictoryRoad_B1F_EventScript_MegaHiker2::
    msgbox VictoryRoad_B1F_Text_MegaHiker, MSGBOX_NPC
    end

VictoryRoad_B1F_EventScript_Samuel::
	trainerbattle_single TRAINER_SAMUEL, VictoryRoad_B1F_Text_SamuelIntro, VictoryRoad_B1F_Text_SamuelDefeat
	msgbox VictoryRoad_B1F_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Shannon::
	trainerbattle_single TRAINER_SHANNON, VictoryRoad_B1F_Text_ShannonIntro, VictoryRoad_B1F_Text_ShannonDefeat
	msgbox VictoryRoad_B1F_Text_ShannonPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Michelle::
	trainerbattle_single TRAINER_MICHELLE, VictoryRoad_B1F_Text_MichelleIntro, VictoryRoad_B1F_Text_MichelleDefeat
	msgbox VictoryRoad_B1F_Text_MichellePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Mitchell::
	trainerbattle_single TRAINER_MITCHELL, VictoryRoad_B1F_Text_MitchellIntro, VictoryRoad_B1F_Text_MitchellDefeat
	msgbox VictoryRoad_B1F_Text_MitchellPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Halle::
	trainerbattle_single TRAINER_HALLE, VictoryRoad_B1F_Text_HalleIntro, VictoryRoad_B1F_Text_HalleDefeat
	msgbox VictoryRoad_B1F_Text_HallePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_Text_SamuelIntro:
	.string "The thought that I'm getting closer to\n"
	.string "the POKéMON LEAGUE…\p"
	.string "I'm getting stage fright…$"

VictoryRoad_B1F_Text_SamuelDefeat:
	.string "I couldn't do a thing…$"

VictoryRoad_B1F_Text_SamuelPostBattle:
	.string "The POKéMON LEAGUE became distant\n"
	.string "again… What a letdown…$"

VictoryRoad_B1F_Text_ShannonIntro:
	.string "To win your way through the POKéMON\n"
	.string "LEAGUE, you need the trust of your\l"
	.string "POKéMON.$"

VictoryRoad_B1F_Text_ShannonDefeat:
	.string "Your relationship is based on\n"
	.string "solid trust.$"

VictoryRoad_B1F_Text_ShannonPostBattle:
	.string "By being together all the time, trust\n"
	.string "grows between POKéMON and TRAINERS.$"

VictoryRoad_B1F_Text_MichelleIntro:
	.string "This isn't the goal. It's only a place\n"
	.string "on the way to the POKéMON LEAGUE.$"

VictoryRoad_B1F_Text_MichelleDefeat:
	.string "That's the way!$"

VictoryRoad_B1F_Text_MichellePostBattle:
	.string "You'll do fine, for sure!\n"
	.string "Your POKéMON are all eager to go!$"

VictoryRoad_B1F_Text_MitchellIntro:
	.string "My POKéMON are cosmically\n"
	.string "awe inspiring!$"

VictoryRoad_B1F_Text_MitchellDefeat:
	.string "I've never met anyone like you before.$"

VictoryRoad_B1F_Text_MitchellPostBattle:
	.string "Even outside of battle, I sense\n"
	.string "incredible power emanating from you\l"
	.string "and your POKéMON.$"

VictoryRoad_B1F_Text_HalleIntro:
	.string "Okay, no need to get your back up!\n"
	.string "Relax, let's take it easy!$"

VictoryRoad_B1F_Text_HalleDefeat:
	.string "Whoa!\n"
	.string "Wonderful!$"

VictoryRoad_B1F_Text_HallePostBattle:
	.string "Sure, this is VICTORY ROAD.\p"
	.string "But it's not all that different from\n"
	.string "the path you've taken so far.\p"
	.string "Try to enjoy things the rest of\n"
	.string "the way!$"

VictoryRoad_B1F_Text_MegaHiker:
    .string "You're an interesting fellow,\p"
    .string "I can sense it.$"

VictoryRoad_B1F_Text_MegaHikerGive:
    .string "I knew you were intersting,\p"
    .string "you have a LEGENDARY POKéMON.\n"
    .string "You should have this.$"

