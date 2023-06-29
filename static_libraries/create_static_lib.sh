#!/bin/sh -e
gcc -c *.c
ar -rcs libmy.a *.c
