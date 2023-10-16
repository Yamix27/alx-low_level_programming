#!/bin/bash
wget -F /temp https://github.com/Yamix27/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/temp/libgiga.so
