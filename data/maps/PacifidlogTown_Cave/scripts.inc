PacifidlogTown_Cave_MapScripts::
	.byte 0

PacifidlogTown_Cave_EventScript_MemoriesHiker::
    goto_if_set FLAG_GOT_MEMORIES, PacifidlogTown_Cave_EventScript_MemoriesHiker2
    specialvar VAR_RESULT, CheckPartySilvally
    goto_if_eq VAR_RESULT, FALSE, PacifidlogTown_Cave_EventScript_MemoriesHiker2
    lock
    faceplayer
    msgbox PacifidlogTown_Cave_Text_MemoriesHiker, MSGBOX_DEFAULT
    giveitem ITEM_FIRE_MEMORY
    giveitem ITEM_WATER_MEMORY
    giveitem ITEM_ELECTRIC_MEMORY
    giveitem ITEM_GRASS_MEMORY
    giveitem ITEM_ICE_MEMORY
    giveitem ITEM_FIGHTING_MEMORY
    giveitem ITEM_POISON_MEMORY
    giveitem ITEM_GROUND_MEMORY
    giveitem ITEM_FLYING_MEMORY
    giveitem ITEM_PSYCHIC_MEMORY
    giveitem ITEM_BUG_MEMORY
    giveitem ITEM_ROCK_MEMORY
    giveitem ITEM_GHOST_MEMORY
    giveitem ITEM_DRAGON_MEMORY
    giveitem ITEM_DARK_MEMORY
    giveitem ITEM_STEEL_MEMORY
    giveitem ITEM_FAIRY_MEMORY
    setflag FLAG_GOT_MEMORIES
    release
    end

PacifidlogTown_Cave_EventScript_MemoriesHiker2::
    msgbox PacifidlogTown_Cave_Text_MemoriesHiker2, MSGBOX_NPC
    end

PacifidlogTown_Cave_Text_MemoriesHiker2:
    .string "I dug out this cave, it holds\p"
    .string "so many memories now."

PacifidlogTown_Cave_Text_MemoriesHiker:
    .string "I see you the man created\p"
    .string "version of ARCEUS, SILVALLY.\n"
    .string "Give it these memories to\l"
    .string "unlock so much more potential.$"
