//Modify this file to change what commands output to your statusbar, and recompile using the make command.
#define BTOTAL  3
#define BLENG  3
static Block blockss[BTOTAL][BLENG] = {
    {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	
	{"", "~/.config/scripts/volumn",	0,		10},
	{"", "~/.config/scripts/battery",	60,		-1},
	{"⌚", "~/.config/scripts/datenow",	30,		-1},

},

{
	{"", "~/.config/scripts/disk",	10,		-1},
	//{"", "~/.config/scripts/ramcpu",	10,		10},
	{"", "~/.config/scripts/disk /home",	10,		-1},
	{"", "~/.config/scripts/ram",	10,		-1},

},

{
	//{"", "~/.config/scripts/ramcpu",	10,		10},
	{"", "~/.config/scripts/downnet",	1,		-1},
	{"", "~/.config/scripts/upnet",	1,		-1},
	{"📶", "iwgetid -r",	60,		-1},

}

};



//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
