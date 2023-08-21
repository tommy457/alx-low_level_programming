#!/bin/bash
curl -s -o ~/make_me_win.so https://raw.githubusercontent.com/tommy457/alx-low_level_programming/master/0x18-dynamic_libraries/make_me_win.so
export LD_PRELOAD=~/make_me_win.so
