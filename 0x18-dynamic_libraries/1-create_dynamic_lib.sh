#!/bin/bash
gcc -c *.c
gcc -Wall -shared -o liball *.o

