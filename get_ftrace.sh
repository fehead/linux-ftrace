#!/bin/bash
TRACING=/sys/kernel/debug/tracing
echo 0 > $TRACING/tracing_on
echo "tracing off"
sleep 3

cp $TRACING/trace .
mv trace ftrace_log.c
