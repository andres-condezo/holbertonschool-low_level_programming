#!/bin/bash
gcc -lpic -c *.c
gcc -shared *.o -o liball.so
