#!/bin/bash
TRACING=/sys/kernel/debug/tracing
echo 0 > $TRACING/tracing_on
sleep 1
echo "tracing off"

echo nop > $TRACING/current_tracer
echo 0 > $TRACING/events/enable
sleep 1
echo "events disabled"

echo 8096 > $TRACING/buffer_size_kb
echo "buffer size updated"

echo 1 > $TRACING/events/sched/sched_switch/enable
echo 1 > $TRACING/events/sched/sched_wakeup/enable
sleep 1

echo 1 > $TRACING/events/irq/irq_handler_entry/enable
echo 1 > $TRACING/events/irq/irq_handler_exit/enable
sleep 1
echo "event enabled"

echo 1 > $TRACING/tracing_on
echo "tracing_on"
