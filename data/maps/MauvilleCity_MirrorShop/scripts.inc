MauvilleCity_MirrorShop_MapScripts::
	.byte 0

MauvilleCity_MirrorShop_EventScript_ShopOwner::
	msgbox MauvilleCity_MirrorShop_Text_ShopOwner, MSGBOX_NPC
	end

MauvilleCity_MirrorShop_EventScript_MirrorGirl::
    lockall
    faceplayer
    goto_if_set FLAG_GOT_REVEAL_GLASS, MauvilleCity_MirrorShop_EventScript_MirrorCurse
	msgbox MauvilleCity_MirrorShop_Text_MirrorGirl, MSGBOX_DEFAULT
	giveitem ITEM_REVEAL_GLASS
	setflag FLAG_GOT_REVEAL_GLASS
	release
	end

MauvilleCity_MirrorShop_EventScript_MirrorCurse::
    msgbox MauvilleCity_MirrorShop_Text_MirrorCurse, MSGBOX_DEFAULT
    release
    end

MauvilleCity_MirrorShop_Text_ShopOwner:
    .string "Welcome! Oh, you're not here\n"
    .string "for shopping? OK.$"

MauvilleCity_MirrorShop_Text_MirrorGirl:
    .string "Dont say anything.\n"
    .string "Take this.$"

MauvilleCity_MirrorShop_Text_MirrorCurse:
    .string "Don't look into the mirror.$"

