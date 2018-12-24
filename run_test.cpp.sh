#!/bin/bash

fn='run_test.cpp.sh'

if [ ! -f $fn ];then
    echo $fn' must be run within its container folder' 1>&2
    exit 1
fi


cd googletest/make

make clean
make all

for out in $(ls | grep -e '.out$') 
do
    ./$out
done 

