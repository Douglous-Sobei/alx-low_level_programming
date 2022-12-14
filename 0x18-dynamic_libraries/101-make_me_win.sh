#!/bin/bash
wget -O win.so https://github.com/Douglous-Sobei/alx-low_level_programming/tree/main/0x18-dynamic_libraries/win.so
export LD_PRELOAD=win.so
