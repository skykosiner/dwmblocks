//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.local/bin/window-manger/spotify-control -status-wm",	1,		0},
    {"", "~/.local/bin/statusbar/volume", 0, 10},
    {"", "~/.local/bin/statusbar/batteryLife", 100, 0},
    {"", "~/.local/bin/statusbar/weather", 1000, 0},
    {"", "~/.local/bin/aircon-stuff/aircon status | sed s/{// | sed s/}//", 20, 5},
    {"", "~/.local/bin/misc/lights status", 20, 3},
	{"", "date +%I:%M%p",					60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
