Route123_ForbiddenRegion_MapScripts::
	.byte 0

Route123_ForbiddenRegion_EventScript_Artist::
    goto_if_set FLAG_RECEIVED_GALARICA_ITEMS, Route123_ForbiddenRegion_EventScript_Artist2
    lock
    faceplayer
	msgbox Route123_ForbiddenRegion_Text_Artist, MSGBOX_DEFAULT
	giveitem ITEM_GALARICA_CUFF
	giveitem ITEM_GALARICA_WREATH
	setflag FLAG_RECEIVED_GALARICA_ITEMS
	release
	end

Route123_ForbiddenRegion_EventScript_Artist2::
    msgbox Route123_ForbiddenRegion_Text_Artist2, MSGBOX_NPC
    end

Route123_ForbiddenRegion_Text_Artist:
    .string "Welcome.\p"
    .string "You might need these.$"

Route123_ForbiddenRegion_Text_Artist2:
    .string "!$"
