#!/bin/bash
wget -P .. https://github.com/Sphamandla-code/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD="$PWD/../libwin.so"
