ShoalCave_LowTideLowerRoom_MapScripts:: @ 8237156
	map_script 1, ShoalCave_LowTideLowerRoom_MapScript1_23715C
	.byte 0

ShoalCave_LowTideLowerRoom_MapScript1_23715C: @ 823715C
	call ShoalCave_LowTideLowerRoom_EventScript_237162
	end

ShoalCave_LowTideLowerRoom_EventScript_237162:: @ 8237162
	checkflag FLAG_0x3BB
	goto_eq ShoalCave_LowTideLowerRoom_EventScript_237175
	setmetatile 18, 2, 856, 1
	return

ShoalCave_LowTideLowerRoom_EventScript_237175:: @ 8237175
	return

ShoalCave_LowTideLowerRoom_EventScript_237176:: @ 8237176
	lockall
	checkflag FLAG_0x3BB
	goto_eq ShoalCave_LowTideLowerRoom_EventScript_2371A8
	giveitem_std ITEM_SHOAL_SALT
	compare_var_to_value VAR_RESULT, 0
	goto_eq ShoalCave_LowTideLowerRoom_EventScript_272054
	setmetatile 18, 2, 858, 0
	special DrawWholeMapView
	setflag FLAG_0x3BB
	releaseall
	end

ShoalCave_LowTideLowerRoom_EventScript_2371A8:: @ 82371A8
	msgbox ShoalCave_LowTideLowerRoom_Text_2A8169, 4
	releaseall
	end

ShoalCave_LowTideLowerRoom_EventScript_2371B2:: @ 82371B2
	lock
	faceplayer
	checkflag FLAG_0x11B
	goto_eq ShoalCave_LowTideLowerRoom_EventScript_2371E1
	msgbox ShoalCave_LowTideLowerRoom_Text_2371EB, 4
	giveitem_std ITEM_FOCUS_BAND
	compare_var_to_value VAR_RESULT, 0
	goto_eq ShoalCave_LowTideLowerRoom_EventScript_272054
	setflag FLAG_0x11B
	release
	end

ShoalCave_LowTideLowerRoom_EventScript_2371E1:: @ 82371E1
	msgbox ShoalCave_LowTideLowerRoom_Text_23728D, 4
	release
	end

ShoalCave_LowTideLowerRoom_Text_2371EB: @ 82371EB
	.string "The penetrating cold around these\n"
	.string "parts is an impediment to training.\p"
	.string "But with focus, one can overcome!\p"
	.string "With this FOCUS BAND, buckle down and\n"
	.string "withstand the cold!$"

ShoalCave_LowTideLowerRoom_Text_23728D: @ 823728D
	.string "Everything starts with focus!$"

