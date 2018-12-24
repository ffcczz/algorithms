#!/bin/bash

fn='run_test.go.sh'

if [ ! -f $fn ];then
    echo $fn' must be run within its container folder' 1>&2
    exit 1
fi

go test -cover ./... -v