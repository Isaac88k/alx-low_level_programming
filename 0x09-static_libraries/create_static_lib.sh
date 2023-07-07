#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liiball.a *.o
ranlib liball.a
