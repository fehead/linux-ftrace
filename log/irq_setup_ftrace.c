# tracer: nop
#
# entries-in-buffer/entries-written: 18204/18204   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
            sshd-832   [000] d...  1037.793528: sched_wakeup: comm=kworker/u8:1 pid=1783 prio=120 target_cpu=000
            sshd-832   [000] d...  1037.793586: sched_switch: prev_comm=sshd prev_pid=832 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:1 next_pid=1783 next_prio=120
          <idle>-0     [002] dnh.  1037.793605: sched_wakeup: comm=kworker/u8:3 pid=2535 prio=120 target_cpu=002
          <idle>-0     [002] d...  1037.793616: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:3 next_pid=2535 next_prio=120
    kworker/u8:1-1783  [000] d.h.  1037.793622: irq_handler_entry: irq=86 name=mmc1
    kworker/u8:1-1783  [000] d.h.  1037.793630: irq_handler_exit: irq=86 ret=handled
    kworker/u8:1-1783  [000] d.H.  1037.793645: sched_wakeup: comm=sshd pid=832 prio=120 target_cpu=000
    kworker/u8:1-1783  [000] d.s.  1037.793654: sched_wakeup: comm=kworker/u8:1 pid=1783 prio=120 target_cpu=000
