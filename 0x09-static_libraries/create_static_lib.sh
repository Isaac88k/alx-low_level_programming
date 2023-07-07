#!/bin/bash
gcc -Wall -pedantic -Werror -Wextro -c *.c
ar -rc li ball.a *.o
ranlib liball.h
