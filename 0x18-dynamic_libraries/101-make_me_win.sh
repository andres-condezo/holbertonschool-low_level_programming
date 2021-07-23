#!/bin/bash
wget -O /tmp/libnewrand.so https://raw.githubusercontent.com/renatoleonholberton/holbertonschool-low_level_programming/main/0x18-dynamic_libraries/libnewrand.so
export LD_PRELOAD=/tmp/libnewrand.so
