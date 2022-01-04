cmd
pi@raspberrypi:~/pi/trace/04 $ ps -ef |grep raspbian_proc
pi        9811  9709  0 12:12 pts/1    00:00:00 ./raspbian_proc
pi        9837  1037  0 12:12 pts/0    00:00:00 grep --color=auto raspbian_proc
pi@raspberrypi:~/pi/trace/04 $ kill -9 9811


# tracer: function
#
# entries-in-buffer/entries-written: 35717/35717   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
            bash-9709  [000] ....  6052.694262: sys_clone+0x14/0x38 <-ret_fast_syscall+0x0/0x28
            bash-9709  [000] ....  6052.694289: <stack trace>
 => sys_clone+0x18/0x38
 => ret_fast_syscall+0x0/0x28
 => 0x7e87f7c0
            bash-9709  [000] d.h.  6052.694301: sched_wakeup: comm=kworker/u8:2 pid=9403 prio=120 target_cpu=000
            bash-9709  [000] ....  6052.694305: _do_fork+0x14/0x414 <-sys_clone+0x30/0x38
            bash-9709  [000] ....  6052.694317: <stack trace>
 => _do_fork+0x18/0x414
 => sys_clone+0x30/0x38
 => ret_fast_syscall+0x0/0x28
 => 0x7e87f7c0
            bash-9709  [000] ....  6052.694320: copy_process.part.3+0x14/0x1af0 <-_do_fork+0xc0/0x414
    kworker/u8:3-8386  [002] d...  6052.694328: sched_switch: prev_comm=kworker/u8:3 prev_pid=8386 prev_prio=120 prev_state=D ==> next_comm=ksoftirqd/2 next_pid=21 next_prio=120
            bash-9709  [000] ....  6052.694332: <stack trace>
 => copy_process.part.3+0x18/0x1af0
 => _do_fork+0xc0/0x414
 => sys_clone+0x30/0x38
 => ret_fast_syscall+0x0/0x28
 => 0x7e87f7c0


            bash-9709  [000] ....  6052.694849: sched_process_fork: comm=bash pid=9709 child_comm=bash child_pid=9811
            bash-9709  [000] dnh.  6052.694939: sched_wakeup: comm=irq/86-mmc1 pid=78 prio=49 target_cpu=000
            bash-9709  [000] d...  6052.694961: sched_switch: prev_comm=bash prev_pid=9709 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=78 next_prio=49
     irq/86-mmc1-78    [000] d.s.  6052.694995: sched_wakeup: comm=irq/86-mmc1 pid=78 prio=49 target_cpu=000
     irq/86-mmc1-78    [000] d.s.  6052.695038: sched_wakeup: comm=irq/86-mmc1 pid=78 prio=49 target_cpu=000
     irq/86-mmc1-78    [000] d.s.  6052.695075: sched_wakeup: comm=irq/86-mmc1 pid=78 prio=49 target_cpu=000


            bash-1037  [000] d...  6076.246143: sched_wakeup: comm=raspbian_proc pid=9811 prio=120 target_cpu=000
            bash-1037  [000] d...  6076.246148: signal_generate: sig=9 errno=0 code=0 comm=raspbian_proc pid=9811 grp=1 res=0
            bash-1037  [000] d...  6076.246834: sched_switch: prev_comm=bash prev_pid=1037 prev_prio=120 prev_state=S ==> next_comm=raspbian_proc next_pid=9811 next_prio=120
   raspbian_proc-9811  [000] d...  6076.246850: signal_deliver: sig=9 errno=0 code=0 sa_handler=0 sa_flags=0
   raspbian_proc-9811  [000] ....  6076.246856: do_exit+0x14/0xbe8 <-do_group_exit+0x50/0xe8
   raspbian_proc-9811  [000] ....  6076.246889: <stack trace>
 => do_exit+0x18/0xbe8
 => do_group_exit+0x50/0xe8
 => get_signal+0x1a4/0x8fc
 => do_signal+0x318/0x498
 => do_work_pending+0xec/0x104
 => slow_work_pending+0xc/0x20
 => 0x76e60f00
   raspbian_proc-9811  [000] ....  6076.247220: sched_process_exit: comm=raspbian_proc pid=9811 prio=120
   raspbian_proc-9811  [000] d...  6076.247296: signal_generate: sig=17 errno=0 code=2 comm=bash pid=9709 grp=1 res=0
   raspbian_proc-9811  [000] dn..  6076.247310: sched_wakeup: comm=bash pid=9709 prio=120 target_cpu=000
   raspbian_proc-9811  [000] d...  6076.247321: sched_switch: prev_comm=raspbian_proc prev_pid=9811 prev_prio=120 prev_state=Z ==> next_comm=bash next_pid=9709 next_prio=120
            bash-9709  [000] d...  6076.248376: signal_deliver: sig=17 errno=0 code=2 sa_handler=57bc0 sa_flags=14000000
            bash-9709  [000] d...  6076.249108: sched_switch: prev_comm=bash prev_pid=9709 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:3 next_pid=8386 next_prio=120
