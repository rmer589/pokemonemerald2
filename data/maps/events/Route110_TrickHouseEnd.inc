Route110_TrickHouseEnd_MapObjects: @ 853DEFC
	object_event 1, MAP_OBJ_GFX_MAN_1, 0, 0, 4, 5, 3, 10, 0, 0, 0, 0, Route110_TrickHouseEnd_EventScript_26AD17, 899, 0, 0

Route110_TrickHouseEnd_MapWarps: @ 853DF14
	warp_def 10, 1, 3, 2, ROUTE_110_TRICK_HOUSE_PUZZLE_1
	warp_def 2, 1, 3, 0, ROUTE_110_TRICK_HOUSE_CORRIDOR

Route110_TrickHouseEnd_MapCoordEvents: @ 853DF24
	coord_event 2, 2, 3, 0, VAR_0x4002, 0, 0, Route110_TrickHouseEnd_EventScript_26B041

Route110_TrickHouseEnd_MapBGEvents: @ 853DF34
	bg_event 4, 5, 3, 7, 0, ITEM_NUGGET, 1, 0

Route110_TrickHouseEnd_MapEvents:: @ 853DF40
	map_events Route110_TrickHouseEnd_MapObjects, Route110_TrickHouseEnd_MapWarps, Route110_TrickHouseEnd_MapCoordEvents, Route110_TrickHouseEnd_MapBGEvents

