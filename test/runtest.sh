#!/bin/bash

cp ../*.c .
cp ../main.h .
gcc *.c -o tests
./tests
