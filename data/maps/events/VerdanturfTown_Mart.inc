VerdanturfTown_Mart_MapObjects: @ 852E790
	object_event 1, MAP_OBJ_GFX_MART_EMPLOYEE, 0, 0, 1, 3, 3, 10, 0, 0, 0, 0, VerdanturfTown_Mart_EventScript_202587, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_BOY_2, 0, 0, 5, 4, 3, 10, 0, 0, 0, 0, VerdanturfTown_Mart_EventScript_2025BA, 0, 0, 0
	object_event 3, MAP_OBJ_GFX_OLD_WOMAN_1, 0, 0, 8, 5, 3, 9, 0, 0, 0, 0, VerdanturfTown_Mart_EventScript_2025C3, 0, 0, 0
	object_event 4, MAP_OBJ_GFX_LASS, 0, 0, 3, 2, 3, 9, 17, 0, 0, 0, VerdanturfTown_Mart_EventScript_2025CC, 0, 0, 0

VerdanturfTown_Mart_MapWarps: @ 852E7F0
	warp_def 3, 7, 0, 1, VERDANTURF_TOWN
	warp_def 4, 7, 0, 1, VERDANTURF_TOWN

VerdanturfTown_Mart_MapEvents:: @ 852E800
	map_events VerdanturfTown_Mart_MapObjects, VerdanturfTown_Mart_MapWarps, 0x0, 0x0

