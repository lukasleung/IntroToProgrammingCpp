#!/bin/bash


program=$1

# Compiling $program into 'runme'
g++ -o runme $program

./runme

rm runme
