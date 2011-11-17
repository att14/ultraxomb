#!/bin/bash

for OPTIONS in "$@"
do
    case $OPTIONS in
        log)
            LOG=1
            ;;
        -x)
            X=1
            ;;
        --help)
            HELP=1
            ;;
    esac
done

if [ "X$HELP" != "X" ]; then
    echo "TODO"
    exit 0
fi

if [ "X$X" != "X" ]; then
    set -x
fi

if [ "X$LOG" != "X" ]; then
    TIME=`date '+%G%m%d%N'`
    mkdir -p logs
    ./clean.sh
    ./ultrabuild.sh > logs/log.$TIME 2>&1 &
    echo "log saved to logs/log.$TIME"
else
    ./clean.sh
    ./ultrabuild.sh
fi

exit 0
