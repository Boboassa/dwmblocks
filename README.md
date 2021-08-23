# Boboassa's build of dwmblocks

dwmblocks - the modular status bar for dwm written in c.

## Requirements

In order to make the bar work correctly you need the scripts that I use
(can be found at [bin](https://github.com/Boboassa/bin)), or provide your own.

## Installation

Enter the following command to build and install dwmblocks (if
necessary as root):

```
make clean install
```

## Running `dwmblocks`

After installing you can put dwmblocks in your xinitrc or other startup
script to have it start with dwm.

## Modifying blocks

The statusbar is made from text output from commandline
programs. Blocks are added and removed by editing the `blocks.h` header file. By
default the `blocks.h` header file is created the first time you run make which
copies the default config from `blocks.def.h`. This is so you can edit your
status bar commands and they will not get overwritten in a future update.

## Updating blocks

Most statusbars constantly rerun every script every several
seconds to update. This is an option here, but a superior choice is giving your
module a signal that you can signal to it to update on a relevant event.
For example, the audio module has the update signal 9 by default.

You can also run `kill -43 $(pidof dwmblocks)` which will have the same effect,
but is faster. Just add 34 to your typical signal number.

## Acknowledgements

Visit [suckless.org](https://suckless.org/) for more information on suckless
programs.
