#!/bin/bash
TRACING=/sys/kernel/debug/tracing
echo 0 > $TRACING/tracing_on
sleep 1
echo "tracing off"

echo 0 > $TRACING/events/enable
sleep 1
echo "events disabled"

echo secondary_start_kernel > $TRACING/set_ftrace_filter
sleep 1
echo "set_ftrace_filter init"

echo function > $TRACING/current_tracer
sleep 1
echo "function tracer enabled"

echo sys_clone do_exit > $TRACING/set_ftrace_filter
echo _do_fork copy_process* >> $TRACING/set_ftrace_filter

sleep 1
echo "set_ftrace_filter"

echo 1 > $TRACING/events/sched/sched_switch/enable
echo 1 > $TRACING/events/sched/sched_wakeup/enable
echo 1 > $TRACING/events/sched/sched_process_fork/enable
echo 1 > $TRACING/events/sched/sched_process_exit/enable
echo 1 > $TRACING/events/signal/enable

sleep 1
echo "event enabled"

echo 1 > $TRACING/options/func_stack_trace
echo 1 > $TRACING/options/sym-offset
echo "function stack_trace enabled"

echo 1 > $TRACING/tracing_on
echo "tracing_on"
