#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fPIC -c c_to_python.c
gcc -shared -o 100-operations.so c_to_python.o
