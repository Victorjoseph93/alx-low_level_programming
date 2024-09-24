#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Victorjoseph93/alx-low_level_programming/master/0x18-dynamic_libraries/libhck.so
export LD_PRELOAD="$PWD/../libhck.so
