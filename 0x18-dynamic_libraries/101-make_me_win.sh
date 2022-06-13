#!/bin/bash
wget -P .. https://raw.github.com/NatnaelDemelash/alx-low_level_programming/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../random.so"
