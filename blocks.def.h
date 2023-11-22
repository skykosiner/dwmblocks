//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"🎵 ", "sb-music",	1,		0},
    {"", "sb-volume", 0, 10},
    {"", "sb-batteryLife", 100, 0},
    {"", "sb-weather", 1000, 0},
    {"🌤 ", "sb-aircon", 20, 5},
    // {"",	"network-stats",	1,	16},
    // {"💡 ", "misc/lights status", 20, 3},
    {"✅ ", "sb-todoist", 20, 0},
    {"", "sb-mailbox", 180, 6},
	{"", "sb-timeDate",					60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
