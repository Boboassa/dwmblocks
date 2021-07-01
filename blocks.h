//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		                     /*Update Interval*/ 	/*Update Signal*/
    { "",       "$HOME/.local/bin/battery.sh",       60,                     0, },
    { "",       "$HOME/.local/bin/backlight.sh",     0,                      1, },
    { "",       "$HOME/.local/bin/volume.sh",        0,                      2, },
    { "",       "$HOME/.local/bin/time.sh",          60,                     0, },
//    { "",       "$HOME/.config/dwmblocks-scs/date.sh",          300,                     0, },

	// {"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	// {"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
