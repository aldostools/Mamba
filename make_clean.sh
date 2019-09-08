#!/bin/bash

if [ -d mamba ]; then 
rm -r mamba
fi

rm *.bin
make clean
