//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"🎵 ", "spotify-control -status-wm",	1,		0},
    {"", "volume", 0, 10},
    {"", "batteryLife", 100, 0},
    {"", "weather", 1000, 0},
    {"🌤 ", "aircon status | sed s/{// | sed s/}//", 20, 5},
    // {"",	"network-stats",	1,	16},
    // {"💡 ", "misc/lights status", 20, 3},
    {"✅ ", "todoist-cli list --filter '(today | overdue)' | wc -l", 20, 0},
    {"", "mailbox", 180, 6},
	{"", "timeDate",					60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
