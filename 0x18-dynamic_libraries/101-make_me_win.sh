#!/bin/bash
wget -q --output-document=$HOME/lib101-gm.so https://github.com/oolufolabii/alx-low_level_programming/raw/main/0x18-dynamic_libraries/lib101-gm.so
export LD_PRELOAD=$HOME/lib101-gm.so
