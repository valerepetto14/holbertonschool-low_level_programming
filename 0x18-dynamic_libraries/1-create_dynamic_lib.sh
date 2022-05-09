#!/bin/bash
gcc -Wall -fPIC -c *.c
gcc -Wall -shared -o liball *.o

