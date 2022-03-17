SootopolisCity_AudiniteHouse_MapScripts::
	.byte 0

SootopolisCity_AudiniteHouse_EventScript_Boy::
    msgbox SootopolisCity_AudiniteHouse_Text_Boy, MSGBOX_NPC
    end

SootopolisCity_AudiniteHouse_EventScript_Woman::
    goto_if_set FLAG_DEFEATED_PETALBURG_GYM, SootopolisCity_AudiniteHouse_EventScript_AudiniteCheck
    msgbox SootopolisCity_AudiniteHouse_Text_Woman, MSGBOX_NPC
    end

SootopolisCity_AudiniteHouse_EventScript_AudiniteCheck::
    goto_if_set FLAG_RECEIVED_AUDINITE, SootopolisCity_AudiniteHouse_EventScript_AudiniteRecieved
    specialvar VAR_RESULT, CheckPartyAudino
    goto_if_eq VAR_RESULT, TRUE, SootopolisCity_AudiniteHouse_EventScript_AudiniteGive
    msgbox SootopolisCity_AudiniteHouse_Text_Woman, MSGBOX_NPC
    end

SootopolisCity_AudiniteHouse_EventScript_AudiniteGive::
    lock
    faceplayer
    msgbox SootopolisCity_AudiniteHouse_Text_AudiniteGive, MSGBOX_DEFAULT
    giveitem ITEM_AUDINITE
    setflag FLAG_RECEIVED_AUDINITE
    waitmessage
    msgbox SootopolisCity_AudiniteHouse_Text_AudiniteGive2, MSGBOX_DEFAULT
    release
    end

SootopolisCity_AudiniteHouse_EventScript_AudiniteRecieved::
    msgbox SootopolisCity_AudiniteHouse_Text_Woman, MSGBOX_NPC
    end

SootopolisCity_AudiniteHouse_EventScript_Man::
    msgbox SootopolisCity_AudiniteHouse_Text_Man, MSGBOX_NPC
    end

SootopolisCity_AudiniteHouse_Text_Boy:
    .string "Hi! We're from the UNOVA Region.\n"
    .string "We moved here quite recently.\p"
    .string "My mom used to be a nurse but she\n"
    .string "just retired and is now here for\p"
    .string "her days! I quite like it here.$"

SootopolisCity_AudiniteHouse_Text_Woman:
    .string "Hi! Welco- Oh, sorry.\n"
    .string "This city is very nice.$"

SootopolisCity_AudiniteHouse_Text_Man:
    .string "Can you grab me a drink?$"

SootopolisCity_AudiniteHouse_Text_AudiniteGive:
    .string "Welcome. How can I help you?\n"
    .string "Oh- You have an AUDINO.\p"
    .string "Where are you from, young one?\n"
    .string "I am a recently retired nurse,\p"
    .string "top class actually. I used to have\n"
    .string "an AUDINO of my own just the other\p"
    .string "day. We were very close, but sadly\n"
    .string "my AUDINO passed away. That is why\p"
    .string "I decided to retire. You seem to be\n"
    .string "very close with your AUDINO.\p"
    .string "Hmm, you should have this.$"

SootopolisCity_AudiniteHouse_Text_AudiniteGive2:
    .string "This is AUDINO's MEGA STONE.\n"
    .string "Use it, and you will be an\p"
    .string "unstoppable healer!$"
