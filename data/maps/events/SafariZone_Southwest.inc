SafariZone_Southwest_MapObjects: @ 853B24C
	object_event 1, MAP_OBJ_GFX_WOMAN_3, 0, 0, 22, 9, 3, 8, 0, 0, 0, 0, SafariZone_Southwest_EventScript_23D267, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_ITEM_BALL, 0, 0, 0, 37, 3, 1, 17, 0, 0, 0, SafariZone_Southwest_EventScript_2912D6, 1131, 0, 0

SafariZone_Southwest_MapWarps: @ 853B27C
	warp_def 29, 7, 3, 0, SAFARI_ZONE_REST_HOUSE

SafariZone_Southwest_MapBGEvents: @ 853B284
	bg_event 32, 7, 3, 0, 0, SafariZone_Southwest_EventScript_23D270

SafariZone_Southwest_MapEvents:: @ 853B290
	map_events SafariZone_Southwest_MapObjects, SafariZone_Southwest_MapWarps, 0x0, SafariZone_Southwest_MapBGEvents

