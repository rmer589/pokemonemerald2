BattleFrontier_BattlePyramidTop_MapScripts:: @ 82550A1
	map_script 5, BattleFrontier_BattlePyramidTop_MapScript1_2550F4
	map_script 2, BattleFrontier_BattlePyramidTop_MapScript2_25516E
	map_script 3, BattleFrontier_BattlePyramidTop_MapScript1_2550B6
	map_script 4, BattleFrontier_BattlePyramidTop_MapScript2_2550CE
	.byte 0

BattleFrontier_BattlePyramidTop_MapScript1_2550B6: @ 82550B6
	setvar VAR_0x8004, 13
	setvar VAR_0x8005, 200
	setvar VAR_0x8006, 0
	special sub_81A8E7C
	setvar VAR_0x400F, 1
	end

BattleFrontier_BattlePyramidTop_MapScript2_2550CE: @ 82550CE
	map_script_2 VAR_0x4001, 0, BattleFrontier_BattlePyramidTop_EventScript_2550D8
	.2byte 0

BattleFrontier_BattlePyramidTop_EventScript_2550D8:: @ 82550D8
	setvar VAR_0x4001, 1
	turnobject 255, 2
	compare_var_to_value VAR_0x400C, 0
	goto_if 5, BattleFrontier_BattlePyramidTop_EventScript_2550F3
	setobjectxyperm 2, 0, 0

BattleFrontier_BattlePyramidTop_EventScript_2550F3:: @ 82550F3
	end

BattleFrontier_BattlePyramidTop_MapScript1_2550F4: @ 82550F4
	setvar VAR_0x8004, 9
	special sub_81A1780
	compare_var_to_value VAR_RESULT, 0
	goto_eq BattleFrontier_BattlePyramidTop_EventScript_25510C
	call BattleFrontier_BattlePyramidTop_EventScript_242170

BattleFrontier_BattlePyramidTop_EventScript_25510C:: @ 825510C
	copyvar VAR_0x400C, VAR_RESULT
	setvar VAR_0x8004, 0
	special sub_81A1780
	switch VAR_0x4000
	case 0, BattleFrontier_BattlePyramidTop_EventScript_255193
	case 1, BattleFrontier_BattlePyramidTop_EventScript_252B66
	case 2, BattleFrontier_BattlePyramidTop_EventScript_255193
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 5
	special sub_81A1780
	compare_var_to_value VAR_RESULT, 2
	goto_eq BattleFrontier_BattlePyramidTop_EventScript_252B42
	compare_var_to_value VAR_RESULT, 3
	goto_eq BattleFrontier_BattlePyramidTop_EventScript_252B42
	compare_var_to_value VAR_RESULT, 9
	goto_eq BattleFrontier_BattlePyramidTop_EventScript_252B42
	end

BattleFrontier_BattlePyramidTop_MapScript2_25516E: @ 825516E
	map_script_2 VAR_0x400E, 0, BattleFrontier_BattlePyramidTop_EventScript_255180
	map_script_2 VAR_0x400F, 1, BattleFrontier_BattlePyramidTop_EventScript_25518A
	.2byte 0

BattleFrontier_BattlePyramidTop_EventScript_255180:: @ 8255180
	playbgm BGM_BATTLE_PYRAMID_SUMMIT, 0
	setvar VAR_0x400E, 1
	end

BattleFrontier_BattlePyramidTop_EventScript_25518A:: @ 825518A
	special AddMapNamePopUpWindowTask
	setvar VAR_0x400F, 0
	end

BattleFrontier_BattlePyramidTop_EventScript_255193:: @ 8255193
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 1
	special sub_81A8E7C
	special copy_player_party_to_sav1
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special sub_81A1780
	setvar VAR_0x8004, 9
	special sub_81A8E7C
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 3
	special sub_81A1780
	setvar VAR_0x400F, 1
	end

BattleFrontier_BattlePyramidTop_EventScript_2551D0:: @ 82551D0
	lock
	faceplayer
	compare_var_to_value VAR_0x400D, 0
	goto_if 5, BattleFrontier_BattlePyramidTop_EventScript_255236
	compare_var_to_value VAR_0x400C, 0
	goto_if 5, BattleFrontier_BattlePyramidTop_EventScript_255240
	msgbox BattleFrontier_BattlePyramidTop_Text_255410, 4
	closemessage
	applymovement 1, BattleFrontier_BattlePyramidTop_Movement_2553FD
	waitmovement 0
	applymovement 255, BattleFrontier_BattlePyramidTop_Movement_255403
	waitmovement 0
	applymovement 1, BattleFrontier_BattlePyramidTop_Movement_255400
	waitmovement 0
	message BattleFrontier_BattlePyramidTop_Text_2554E8
	waitmessage
	playfanfare BGM_ME_BATTLE_POINTS
	waitfanfare
	closemessage

BattleFrontier_BattlePyramidTop_EventScript_25521A:: @ 825521A
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 3
	special sub_81A1780
	warp BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 255, 7, 13
	waitstate
	end

BattleFrontier_BattlePyramidTop_EventScript_255236:: @ 8255236
	msgbox BattleFrontier_BattlePyramidTop_Text_255BFE, 4
	closemessage
	end

BattleFrontier_BattlePyramidTop_EventScript_255240:: @ 8255240
	msgbox BattleFrontier_BattlePyramidTop_Text_25551F, 4
	applymovement 1, BattleFrontier_BattlePyramidTop_Movement_2553FD
	setvar VAR_0x400D, 1
	closemessage
	end

BattleFrontier_BattlePyramidTop_EventScript_255256:: @ 8255256
	lockall
	switch VAR_0x400C
	case 2, BattleFrontier_BattlePyramidTop_EventScript_255335
	case 3, BattleFrontier_BattlePyramidTop_EventScript_2552D0
	case 4, BattleFrontier_BattlePyramidTop_EventScript_255388
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 7
	special sub_81A1780
	compare_var_to_value VAR_RESULT, 0
	goto_if 5, BattleFrontier_BattlePyramidTop_EventScript_2552D0
	special SpawnScriptFieldObject
	applymovement 127, BattleFrontier_BattlePyramidTop_Movement_25540C
	waitmovement 0
	msgbox BattleFrontier_BattlePyramidTop_Text_255669, 4
	closemessage
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 7
	special sub_81A1780
	applymovement 2, BattleFrontier_BattlePyramidTop_Movement_25540A
	waitmovement 0
	msgbox BattleFrontier_BattlePyramidTop_Text_25573E, 4
	goto BattleFrontier_BattlePyramidTop_EventScript_2552DA
	end

BattleFrontier_BattlePyramidTop_EventScript_2552D0:: @ 82552D0
	applymovement 2, BattleFrontier_BattlePyramidTop_Movement_25540A
	waitmovement 0

BattleFrontier_BattlePyramidTop_EventScript_2552DA:: @ 82552DA
	msgbox BattleFrontier_BattlePyramidTop_Text_255846, 4
	call BattleFrontier_BattlePyramidTop_EventScript_2553ED
	playbgm BGM_BATTLE_PYRAMID_SUMMIT, 0
	compare_var_to_value VAR_RESULT, 1
	goto_eq BattleFrontier_BattlePyramidTop_EventScript_2552FB
	goto BattleFrontier_BattlePyramidTop_EventScript_252B42

BattleFrontier_BattlePyramidTop_EventScript_2552FB:: @ 82552FB
	setvar VAR_0x8004, 12
	special sub_81A1780
	compare_var_to_value VAR_RESULT, 0
	goto_if 5, BattleFrontier_BattlePyramidTop_EventScript_25521A
	msgbox BattleFrontier_BattlePyramidTop_Text_255873, 4
	playfanfare BGM_ME_BATTLE_SYMBOL
	message BattleFrontier_BattlePyramidTop_Text_2558E9
	waitmessage
	waitfanfare
	setvar VAR_0x8004, 13
	special sub_81A1780
	msgbox BattleFrontier_BattlePyramidTop_Text_25591D, 4
	goto BattleFrontier_BattlePyramidTop_EventScript_25521A

BattleFrontier_BattlePyramidTop_EventScript_255335:: @ 8255335
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 7
	special sub_81A1780
	compare_var_to_value VAR_RESULT, 0
	goto_if 5, BattleFrontier_BattlePyramidTop_EventScript_255388
	special SpawnScriptFieldObject
	applymovement 127, BattleFrontier_BattlePyramidTop_Movement_25540C
	waitmovement 0
	msgbox BattleFrontier_BattlePyramidTop_Text_255951, 4
	closemessage
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 7
	special sub_81A1780
	applymovement 2, BattleFrontier_BattlePyramidTop_Movement_25540A
	waitmovement 0
	msgbox BattleFrontier_BattlePyramidTop_Text_255A6D, 4
	goto BattleFrontier_BattlePyramidTop_EventScript_255392
	end

BattleFrontier_BattlePyramidTop_EventScript_255388:: @ 8255388
	applymovement 2, BattleFrontier_BattlePyramidTop_Movement_25540A
	waitmovement 0

BattleFrontier_BattlePyramidTop_EventScript_255392:: @ 8255392
	msgbox BattleFrontier_BattlePyramidTop_Text_255AA1, 4
	call BattleFrontier_BattlePyramidTop_EventScript_2553ED
	playbgm BGM_BATTLE_PYRAMID_SUMMIT, 0
	compare_var_to_value VAR_RESULT, 1
	goto_eq BattleFrontier_BattlePyramidTop_EventScript_2553B3
	goto BattleFrontier_BattlePyramidTop_EventScript_252B42

BattleFrontier_BattlePyramidTop_EventScript_2553B3:: @ 82553B3
	setvar VAR_0x8004, 12
	special sub_81A1780
	compare_var_to_value VAR_RESULT, 2
	goto_eq BattleFrontier_BattlePyramidTop_EventScript_25521A
	msgbox BattleFrontier_BattlePyramidTop_Text_255ACD, 4
	playfanfare BGM_ME_BATTLE_SYMBOL
	message BattleFrontier_BattlePyramidTop_Text_255B59
	waitmessage
	waitfanfare
	setvar VAR_0x8004, 13
	special sub_81A1780
	msgbox BattleFrontier_BattlePyramidTop_Text_255B82, 4
	goto BattleFrontier_BattlePyramidTop_EventScript_25521A

BattleFrontier_BattlePyramidTop_EventScript_2553ED:: @ 82553ED
	closemessage
	setvar VAR_0x8004, 10
	setvar VAR_0x8005, 0
	special sub_8163AC4
	waitstate
	return

BattleFrontier_BattlePyramidTop_Movement_2553FD: @ 82553FD
	step_right
	step_27
	step_end

BattleFrontier_BattlePyramidTop_Movement_255400: @ 8255400
	step_left
	step_26
	step_end

BattleFrontier_BattlePyramidTop_Movement_255403: @ 8255403
	step_up
	step_up
	step_up
	step_up
	step_up
	step_25
	step_end

BattleFrontier_BattlePyramidTop_Movement_25540A: @ 825540A
	step_15
	step_end

BattleFrontier_BattlePyramidTop_Movement_25540C: @ 825540C
	slow_step_up
	slow_step_up
	step_14
	step_end

BattleFrontier_BattlePyramidTop_Text_255410: @ 8255410
	.string "It is a delight to see you here!\n"
	.string "You have reached the summit of\l"
	.string "the BATTLE PYRAMID!\p"
	.string "Above here is the PYRAMID’s\n"
	.string "lookout point.\p"
	.string "It is a place open only to those\n"
	.string "who have conquered the PYRAMID.\p"
	.string "Now, please!\n"
	.string "Up you go!$"

BattleFrontier_BattlePyramidTop_Text_2554E8: @ 82554E8
	.string "The PYRAMID’s new conqueror!\n"
	.string "Let the name {PLAYER} be known!$"

BattleFrontier_BattlePyramidTop_Text_25551F: @ 825551F
	.string "It is a delight to see you here!\p"
	.string "Unfortunately, you were second by\n"
	.string "a mere fraction of time!\p"
	.string "Our chief has already conquered\n"
	.string "the PYRAMID ahead of you.\p"
	.string "However, my young explorer…\n"
	.string "You are a TRAINER!\p"
	.string "Assert your power and take the glory\n"
	.string "of the pinnacle from our chief!\p"
	.string "Now, please! When you are ready,\n"
	.string "take one more step of courage!$"

BattleFrontier_BattlePyramidTop_Text_255669: @ 8255669
	.string "Young adventurer…\p"
	.string "Wouldn’t you agree that explorations\n"
	.string "are the grandest of adventures?\p"
	.string "Your own wits!\p"
	.string "Your own strength!\p"
	.string "Your own POKéMON!\p"
	.string "And, above all, only your own courage\n"
	.string "to lead you through unknown worlds…$"

BattleFrontier_BattlePyramidTop_Text_25573E: @ 825573E
	.string "Aah, yes, indeed this life is grand!\n"
	.string "Grand, it is! Eh?\p"
	.string "I’m BRANDON!\p"
	.string "I’m the PYRAMID KING, which means\n"
	.string "I’m in charge here.\p"
	.string "Most people call me the chief!\p"
	.string "You coming here means you have\n"
	.string "that much confidence in yourself,\l"
	.string "am I right?\p"
	.string "Hahahah!\n"
	.string "This should be exciting!$"

BattleFrontier_BattlePyramidTop_Text_255846: @ 8255846
	.string "Now, then!\n"
	.string "Bring your courage to our battle!$"

BattleFrontier_BattlePyramidTop_Text_255873: @ 8255873
	.string "BRANDON: Hahahah! Grand it was!\n"
	.string "Grand, yes, indeed!\p"
	.string "Well done! You’ve earned recognition!\n"
	.string "Your FRONTIER PASS, please!$"

BattleFrontier_BattlePyramidTop_Text_2558E9: @ 82558E9
	.string "The Brave Symbol was embossed on\n"
	.string "the FRONTIER PASS!$"

BattleFrontier_BattlePyramidTop_Text_25591D: @ 825591D
	.string "Young explorer!\n"
	.string "I look forward to our next meeting!$"

BattleFrontier_BattlePyramidTop_Text_255951: @ 8255951
	.string "BRANDON: …You’ve finally returned,\n"
	.string "young explorer…\p"
	.string "Your love of adventure seems to come\n"
	.string "deep from within your heart…\p"
	.string "Yes… You are exactly as I was in\n"
	.string "my own youth…\p"
	.string "… … …Ah…\p"
	.string "The passionate!\p"
	.string "The dangerous!\p"
	.string "The desperate!\p"
	.string "Those days of death-defying,\n"
	.string "life-affirming adventures are back…$"

BattleFrontier_BattlePyramidTop_Text_255A6D: @ 8255A6D
	.string "Now, then!\p"
	.string "I sense my own courage is off\n"
	.string "the meter!$"

BattleFrontier_BattlePyramidTop_Text_255AA1: @ 8255AA1
	.string "Everything you have!\n"
	.string "I’m braced for it all!$"

BattleFrontier_BattlePyramidTop_Text_255ACD: @ 8255ACD
	.string "BRANDON: Hahahah!\n"
	.string "Remarkable!\l"
	.string "Yes, it’s grand, indeed!\p"
	.string "Young explorer!\p"
	.string "You’ve bested me through and through!\n"
	.string "Here! I want you to have this!$"

BattleFrontier_BattlePyramidTop_Text_255B59: @ 8255B59
	.string "The Brave Symbol took on\n"
	.string "a golden shine!$"

BattleFrontier_BattlePyramidTop_Text_255B82: @ 8255B82
	.string "Ah, yes! It just goes to show that\n"
	.string "I have much to learn still!\p"
	.string "May our paths cross again!\n"
	.string "Farewell for now, young explorer!$"

BattleFrontier_BattlePyramidTop_Text_255BFE: @ 8255BFE
	.string "Now, when you are ready, take courage\n"
	.string "and step forward.$"

