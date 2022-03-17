.set LOCALID_HIKER, 1

Route126_MeloettaCave_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, Route126_MeloettaCave_OnTransition
	.byte 0

Route126_MeloettaCave_OnTransition::
    setflag FLAG_HIDE_MELOETTA_CAVE_HIKER
    specialvar VAR_RESULT, CheckPartyMeloetta
    goto_if_eq VAR_RESULT, TRUE, Route126_MeloettaCave_EventScript_SpawnNPC
    end

Route126_MeloettaCave_EventScript_SpawnNPC::
    clearflag FLAG_HIDE_MELOETTA_CAVE_HIKER
    addobject LOCALID_HIKER
    end
