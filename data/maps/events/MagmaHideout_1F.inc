MagmaHideout_1F_MapObjects: @ 85371CC
	object_event 1, MAP_OBJ_GFX_MAGMA_MEMBER_M, 0, 0, 4, 5, 0, 10, 17, 0, 1, 2, MagmaHideout_1F_EventScript_23988C, 857, 0, 0
	object_event 2, MAP_OBJ_GFX_ITEM_BALL, 0, 0, 3, 20, 0, 1, 17, 0, 0, 0, MagmaHideout_1F_EventScript_2914DE, 1151, 0, 0
	object_event 3, MAP_OBJ_GFX_MAGMA_MEMBER_M, 0, 0, 30, 20, 3, 9, 17, 0, 1, 4, MagmaHideout_1F_EventScript_2398A3, 857, 0, 0
	object_event 4, MAP_OBJ_GFX_PUSHABLE_BOULDER, 0, 0, 5, 22, 3, 1, 0, 0, 0, 0, MagmaHideout_1F_EventScript_2908BA, 17, 0, 0
	object_event 5, MAP_OBJ_GFX_PUSHABLE_BOULDER, 0, 0, 7, 22, 3, 1, 0, 0, 0, 0, MagmaHideout_1F_EventScript_2908BA, 18, 0, 0
	object_event 6, MAP_OBJ_GFX_PUSHABLE_BOULDER, 0, 0, 6, 23, 3, 1, 0, 0, 0, 0, MagmaHideout_1F_EventScript_2908BA, 19, 0, 0

MagmaHideout_1F_MapWarps: @ 853725C
	warp_def 10, 34, 3, 4, JAGGED_PASS
	warp_def 25, 34, 3, 1, MAGMA_HIDEOUT_2F_1R
	warp_def 31, 3, 0, 1, MAGMA_HIDEOUT_2F_2R
	warp_def 20, 22, 0, 0, MAGMA_HIDEOUT_2F_3R

MagmaHideout_1F_MapEvents:: @ 853727C
	map_events MagmaHideout_1F_MapObjects, MagmaHideout_1F_MapWarps, 0x0, 0x0

