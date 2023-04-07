#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
ar src liball.a *.o
ranlib liball.a
