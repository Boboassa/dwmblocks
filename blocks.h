/* Modify this file to change what commands output to your statusbar
 * and recompile using the make command. */
static const Block blocks[] = {
/* Icon      Command                                      Interval     Signal*/
    { "",     "$HOME/.local/bin/dwmblocks/db-wifi",        10,          6, },
    { "",     "$HOME/.local/bin/dwmblocks/db-backlight",   0,           8, },
    { "",     "$HOME/.local/bin/dwmblocks/db-volume",      0,           9, },
    { "",     "$HOME/.local/bin/dwmblocks/db-battery",     0,           7, },
    { "",     "$HOME/.local/bin/dwmblocks/db-time",        30,          0, },
//    { "",     "$HOME/.config/dwmblocks-scs/db-date",       300,         0, },

};

/* Update the text by running the commands by running:
 * kill -NUM $(pidof dwmblocks)
 * with NUM = Signal + 34
 * Every update signal must be different */


/* Set delimeter between status commands
 * NULL character ('\0') means no delimeter */
static char delim[] = "  ";
static unsigned int delimLen = 5;
