LilycoveCity_CoveLilyMotel_2F_MapScripts:: @ 82186D2
	.byte 0

LilycoveCity_CoveLilyMotel_2F_EventScript_2186D3:: @ 82186D3
	lock
	faceplayer
	checkflag FLAG_0x002
	call_if 0, LilycoveCity_CoveLilyMotel_2F_EventScript_2186F9
	checkflag FLAG_0x002
	call_if 1, LilycoveCity_CoveLilyMotel_2F_EventScript_21870F
	specialvar VAR_RESULT, sub_80C08E4
	compare_var_to_value VAR_RESULT, 1
	goto_eq LilycoveCity_CoveLilyMotel_2F_EventScript_218702
	release
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_2186F9:: @ 82186F9
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_218774, 4
	return

LilycoveCity_CoveLilyMotel_2F_EventScript_218702:: @ 8218702
	setflag FLAG_0x002
	playfanfare BGM_FANFA4
	waitfanfare
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_21870F
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_21870F:: @ 821870F
	message LilycoveCity_CoveLilyMotel_2F_Text_21881C
	waitmessage
	call LilycoveCity_CoveLilyMotel_2F_EventScript_27207E
	special sub_8137CB4
	waitstate
	release
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_218720:: @ 8218720
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_2188D6, 2
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_218729:: @ 8218729
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_21892B, 2
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_218732:: @ 8218732
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_21896C, 2
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_21873B:: @ 821873B
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_218A21, 2
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_218744:: @ 8218744
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_218A5B, 2
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_21874D:: @ 821874D
	lock
	faceplayer
	checkflag FLAG_0x1CE
	goto_eq LilycoveCity_CoveLilyMotel_2F_EventScript_21876A
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_218ACF, 4
	addvar VAR_0x40D1, 1
	setflag FLAG_0x1CE
	release
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_21876A:: @ 821876A
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_218C33, 4
	release
	end

LilycoveCity_CoveLilyMotel_2F_Text_218774: @ 8218774
	.string "I’m the GAME DESIGNER.\p"
	.string "Oh, is that right?\n"
	.string "You’re working on a POKéDEX?\p"
	.string "It’s tough trying to complete it,\n"
	.string "but don’t give up.\p"
	.string "If you do complete it, please come\n"
	.string "show me.$"

LilycoveCity_CoveLilyMotel_2F_Text_21881C: @ 821881C
	.string "Wow! That’s awesome!\n"
	.string "Yep, it’s totally awesome!\p"
	.string "This POKéDEX is completely filled!\n"
	.string "You really must love POKéMON!\p"
	.string "I’m so impressed!\p"
	.string "Let me give you something in\n"
	.string "recognition of your feat!$"

LilycoveCity_CoveLilyMotel_2F_Text_2188D6: @ 82188D6
	.string "Me? You’re talking to me?\n"
	.string "I’m the PROGRAMMER.\p"
	.string "I wonder what the SLOTS are\n"
	.string "like here.$"

LilycoveCity_CoveLilyMotel_2F_Text_21892B: @ 821892B
	.string "I’m the GRAPHIC ARTIST! Aren’t the\n"
	.string "POKéMON of HOENN interesting?$"

LilycoveCity_CoveLilyMotel_2F_Text_21896C: @ 821896C
	.string "The girl TUBERS, they’re cute, hey?\n"
	.string "To battle against a cute TUBER…\p"
	.string "Whoop, it’s so awesome!\p"
	.string "And the TWINS! Aren’t they cute?\n"
	.string "A 2-on-2 battle with TWINS…\p"
	.string "Whoop, it’s unbearably fun!$"

LilycoveCity_CoveLilyMotel_2F_Text_218A21: @ 8218A21
	.string "The sea breeze tickles my heart.\n"
	.string "It feels wonderful here!$"

LilycoveCity_CoveLilyMotel_2F_Text_218A5B: @ 8218A5B
	.string "You never know when and where\n"
	.string "people will challenge you.\p"
	.string "That’s why I never leave home without\n"
	.string "my GAME BOY ADVANCE.$"

LilycoveCity_CoveLilyMotel_2F_Text_218ACF: @ 8218ACF
	.string "SCOTT: … … … … …\n"
	.string "… … … … … Zzz…\p"
	.string "… … … … … Huh?!\n"
	.string "Oh, sorry, sorry! I was snoozing!\p"
	.string "I came to check out this POKéMON\n"
	.string "CONTEST thing.\p"
	.string "I have to admit, it does look quite\n"
	.string "entertaining, but…\p"
	.string "Consider me a purist--I prefer\n"
	.string "battles and tough TRAINERS.\p"
	.string "But that’s just me.\p"
	.string "{PLAYER}{KUN}, I hope you’ll enjoy everything\n"
	.string "like the GYMS, CONTESTS, BATTLE TENT,\l"
	.string "the whole works!$"

LilycoveCity_CoveLilyMotel_2F_Text_218C33: @ 8218C33
	.string "SCOTT: I think it does take strategy\n"
	.string "to win a CONTEST.\p"
	.string "Devising CONTEST strategies is one way\n"
	.string "of becoming a better TRAINER, I’d say.$"

