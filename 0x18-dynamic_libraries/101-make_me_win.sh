#!/bin/bash
wget -P .. https://raw.githubusercontent.com/AlaaAymanAbdElRaheem/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libgigagm.so
export LD_PRELOAD=/home/abd/alx/alx-low_level_programming/0x18-dynamic_libraries/libgigagm.so
