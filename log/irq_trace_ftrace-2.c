# tracer: function
#
# entries-in-buffer/entries-written: 16308/16308   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
    kworker/u8:2-133   [000] d.h.  1257.341202: irq_handler_entry: irq=86 name=mmc1
    kworker/u8:2-133   [000] d.h.  1257.341211: bcm2835_mmc_irq+0x14/0x6e8 <-__handle_irq_event_percpu+0x84/0x25c
    kworker/u8:2-133   [000] d.h.  1257.341266: <stack trace>
 => bcm2835_mmc_irq+0x18/0x6e8
 => __handle_irq_event_percpu+0x84/0x25c
 => handle_irq_event_percpu+0x3c/0x90
 => handle_irq_event+0x54/0x78
 => handle_level_irq+0xd4/0x15c
 => generic_handle_irq+0x34/0x44
 => bcm2836_chained_handle_irq+0x48/0x4c
 => generic_handle_irq+0x34/0x44
 => __handle_domain_irq+0x6c/0xc4
 => bcm2836_arm_irqchip_handle_irq+0x60/0xa8
 => __irq_svc+0x5c/0x7c
 => wait_for_common+0x1a0/0x1d0
 => wait_for_common+0x1a0/0x1d0
 => wait_for_completion+0x20/0x24
 => mmc_wait_for_req_done+0x9c/0x118
 => mmc_wait_for_req+0xb0/0xe0
 => mmc_wait_for_cmd+0x7c/0xb0
 => mmc_io_rw_direct_host+0xa8/0x138
 => mmc_io_rw_direct+0x30/0x38
 => sdio_writeb+0x44/0x6c
 => brcmf_sdio_kso_control+0x1f8/0x250 [brcmfmac]
 => brcmf_sdio_bus_sleep+0x178/0x1e4 [brcmfmac]
 => brcmf_sdio_dataworker+0x18c/0x242c [brcmfmac]
 => process_one_work+0x23c/0x518
 => worker_thread+0x60/0x5b8
 => kthread+0x16c/0x174
 => ret_from_fork+0x14/0x28
 => 0
    kworker/u8:2-133   [000] d.h.  1257.341273: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.  1257.344299: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] dnh.  1257.344325: irq_handler_exit: irq=162 ret=handled
    kworker/u8:2-133   [000] d.h.  1257.344360: irq_handler_entry: irq=86 name=mmc1
    kworker/u8:2-133   [000] d.h.  1257.344363: bcm2835_mmc_irq+0x14/0x6e8 <-__handle_irq_event_percpu+0x84/0x25c
    kworker/u8:2-133   [000] d.h.  1257.344426: <stack trace>
 => bcm2835_mmc_irq+0x18/0x6e8
 => __handle_irq_event_percpu+0x84/0x25c
 => handle_irq_event_percpu+0x3c/0x90
 => handle_irq_event+0x54/0x78
 => handle_level_irq+0xd4/0x15c
 => generic_handle_irq+0x34/0x44
 => bcm2836_chained_handle_irq+0x48/0x4c
 => generic_handle_irq+0x34/0x44
 => __handle_domain_irq+0x6c/0xc4
 => bcm2836_arm_irqchip_handle_irq+0x60/0xa8
 => __irq_svc+0x5c/0x7c
 => mmc_wait_for_req_done+0x1c/0x118
 => mmc_wait_for_req_done+0x1c/0x118
 => mmc_wait_for_req+0xb0/0xe0
 => mmc_wait_for_cmd+0x7c/0xb0
 => mmc_io_rw_direct_host+0xa8/0x138
 => mmc_io_rw_direct+0x30/0x38
 => sdio_readb+0x58/0xa4
 => brcmf_sdio_kso_control+0xd4/0x250 [brcmfmac]
 => brcmf_sdio_bus_sleep+0x178/0x1e4 [brcmfmac]
 => brcmf_sdio_dataworker+0x18c/0x242c [brcmfmac]
 => process_one_work+0x23c/0x518
 => worker_thread+0x60/0x5b8
 => kthread+0x16c/0x174
 => ret_from_fork+0x14/0x28
 => 0
    kworker/u8:2-133   [000] d.h.  1257.344434: irq_handler_exit: irq=86 ret=handled
    kworker/u8:2-133   [000] d.h.  1257.344497: irq_handler_entry: irq=86 name=mmc1
    kworker/u8:2-133   [000] d.h.  1257.344499: bcm2835_mmc_irq+0x14/0x6e8 <-__handle_irq_event_percpu+0x84/0x25c
    kworker/u8:2-133   [000] d.h.  1257.344543: <stack trace>
 => bcm2835_mmc_irq+0x18/0x6e8
 => __handle_irq_event_percpu+0x84/0x25c
 => handle_irq_event_percpu+0x3c/0x90
 => handle_irq_event+0x54/0x78
 => handle_level_irq+0xd4/0x15c
 => generic_handle_irq+0x34/0x44
 => bcm2836_chained_handle_irq+0x48/0x4c
 => generic_handle_irq+0x34/0x44
 => __handle_domain_irq+0x6c/0xc4
 => bcm2836_arm_irqchip_handle_irq+0x60/0xa8
 => __irq_svc+0x5c/0x7c
 => wait_for_common+0x1a0/0x1d0
 => wait_for_common+0x1a0/0x1d0
 => wait_for_completion+0x20/0x24
 => mmc_wait_for_req_done+0x9c/0x118
 => mmc_wait_for_req+0xb0/0xe0
 => mmc_io_rw_extended+0x258/0x314
 => sdio_io_rw_ext_helper+0x144/0x1c0
 => sdio_memcpy_toio+0x30/0x38
 => brcmf_sdiod_skbuff_write+0x3c/0x64 [brcmfmac]
 => brcmf_sdiod_send_pkt+0xb4/0xf8 [brcmfmac]
 => brcmf_sdio_dataworker+0x1e44/0x242c [brcmfmac]
 => process_one_work+0x23c/0x518
 => worker_thread+0x60/0x5b8
 => kthread+0x16c/0x174
 => ret_from_fork+0x14/0x28
 => 0
    kworker/u8:2-133   [000] d.h.  1257.344561: irq_handler_exit: irq=86 ret=handled
     in:imuxsock-386   [000] d.h.  1257.344630: irq_handler_entry: irq=86 name=mmc1
     in:imuxsock-386   [000] d.h.  1257.344632: bcm2835_mmc_irq+0x14/0x6e8 <-__handle_irq_event_percpu+0x84/0x25c
     in:imuxsock-386   [000] d.h.  1257.344671: <stack trace>
 => bcm2835_mmc_irq+0x18/0x6e8
 => __handle_irq_event_percpu+0x84/0x25c
 => handle_irq_event_percpu+0x3c/0x90
 => handle_irq_event+0x54/0x78
 => handle_level_irq+0xd4/0x15c
 => generic_handle_irq+0x34/0x44
 => bcm2836_chained_handle_irq+0x48/0x4c
 => generic_handle_irq+0x34/0x44
 => __handle_domain_irq+0x6c/0xc4
 => bcm2836_arm_irqchip_handle_irq+0x60/0xa8
 => __irq_svc+0x5c/0x7c
 => finish_task_switch+0xa0/0x24c
 => finish_task_switch+0xa0/0x24c
 => __schedule+0x2b4/0x9ec
 => schedule+0x4c/0xac
 => schedule_hrtimeout_range_clock+0x15c/0x168
 => schedule_hrtimeout_range+0x28/0x30
 => poll_schedule_timeout.constprop.2+0x60/0xa4
 => do_sys_poll+0x4a0/0x528
 => sys_poll+0x40/0x138
 => ret_fast_syscall+0x0/0x28
 => 0x76a97cc8
     in:imuxsock-386   [000] d.h.  1257.344676: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.  1257.345265: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.  1257.345269: bcm2835_mmc_irq+0x14/0x6e8 <-__handle_irq_event_percpu+0x84/0x25c
          <idle>-0     [000] d.h.  1257.345311: <stack trace>
 => bcm2835_mmc_irq+0x18/0x6e8
 => __handle_irq_event_percpu+0x84/0x25c
 => handle_irq_event_percpu+0x3c/0x90
 => handle_irq_event+0x54/0x78
 => handle_level_irq+0xd4/0x15c
 => generic_handle_irq+0x34/0x44
 => bcm2836_chained_handle_irq+0x48/0x4c
 => generic_handle_irq+0x34/0x44
 => __handle_domain_irq+0x6c/0xc4
 => bcm2836_arm_irqchip_handle_irq+0x60/0xa8
 => __irq_svc+0x5c/0x7c
 => arch_cpu_idle+0x34/0x4c
 => arch_cpu_idle+0x34/0x4c
 => default_idle_call+0x40/0x48
 => do_idle+0x124/0x164
 => cpu_startup_entry+0x28/0x2c
 => rest_init+0xb8/0xbc
 => start_kernel+0x48c/0x4b8
          <idle>-0     [000] d.h.  1257.345320: irq_handler_exit: irq=86 ret=handled
     irq/86-mmc1-80    [000] d.h.  1257.345370: irq_handler_entry: irq=86 name=mmc1
     irq/86-mmc1-80    [000] d.h.  1257.345373: bcm2835_mmc_irq+0x14/0x6e8 <-__handle_irq_event_percpu+0x84/0x25c
     irq/86-mmc1-80    [000] d.h.  1257.345416: <stack trace>
 => bcm2835_mmc_irq+0x18/0x6e8
 => __handle_irq_event_percpu+0x84/0x25c
 => handle_irq_event_percpu+0x3c/0x90
 => handle_irq_event+0x54/0x78
 => handle_level_irq+0xd4/0x15c
 => generic_handle_irq+0x34/0x44
 => bcm2836_chained_handle_irq+0x48/0x4c
 => generic_handle_irq+0x34/0x44
 => __handle_domain_irq+0x6c/0xc4
 => bcm2836_arm_irqchip_handle_irq+0x60/0xa8
 => __irq_svc+0x5c/0x7c
 => wait_for_common+0x1a0/0x1d0
 => wait_for_common+0x1a0/0x1d0
 => wait_for_completion+0x20/0x24
 => mmc_wait_for_req_done+0x9c/0x118
 => mmc_wait_for_req+0xb0/0xe0
 => mmc_wait_for_cmd+0x7c/0xb0
 => mmc_io_rw_direct_host+0xa8/0x138
 => mmc_io_rw_direct+0x30/0x38
 => process_sdio_pending_irqs+0xa4/0x19c
 => sdio_run_irqs+0x44/0x60
 => bcm2835_mmc_thread_irq+0x54/0x98
 => irq_thread_fn+0x2c/0x88
 => irq_thread+0x164/0x240
 => kthread+0x16c/0x174
 => ret_from_fork+0x14/0x28
 => 0
     irq/86-mmc1-80    [000] d.h.  1257.345421: irq_handler_exit: irq=86 ret=handled
     irq/86-mmc1-80    [000] d.h.  1257.345469: irq_handler_entry: irq=86 name=mmc1
     irq/86-mmc1-80    [000] d.h.  1257.345471: bcm2835_mmc_irq+0x14/0x6e8 <-__handle_irq_event_percpu+0x84/0x25c
     irq/86-mmc1-80    [000] d.h.  1257.345522: <stack trace>
 => bcm2835_mmc_irq+0x18/0x6e8
 => __handle_irq_event_percpu+0x84/0x25c
 => handle_irq_event_percpu+0x3c/0x90
 => handle_irq_event+0x54/0x78
 => handle_level_irq+0xd4/0x15c
 => generic_handle_irq+0x34/0x44
 => bcm2836_chained_handle_irq+0x48/0x4c
 => generic_handle_irq+0x34/0x44
 => __handle_domain_irq+0x6c/0xc4
 => bcm2836_arm_irqchip_handle_irq+0x60/0xa8
 => __irq_svc+0x5c/0x7c
 => wait_for_common+0x1a0/0x1d0
 => wait_for_common+0x1a0/0x1d0
 => wait_for_completion+0x20/0x24
 => mmc_wait_for_req_done+0x9c/0x118
 => mmc_wait_for_req+0xb0/0xe0
 => mmc_io_rw_extended+0x258/0x314
 => sdio_io_rw_ext_helper+0x144/0x1c0
 => sdio_readl+0x40/0x60
 => brcmf_sdiod_readl+0x5c/0x84 [brcmfmac]
 => brcmf_sdio_intr_rstatus+0x48/0xdc [brcmfmac]
 => brcmf_sdio_isr+0x9c/0xe4 [brcmfmac]
 => brcmf_sdiod_ib_irqhandler+0x3c/0x40 [brcmfmac]
 => process_sdio_pending_irqs+0x108/0x19c
 => sdio_run_irqs+0x44/0x60
 => bcm2835_mmc_thread_irq+0x54/0x98
 => irq_thread_fn+0x2c/0x88
 => irq_thread+0x164/0x240
 => kthread+0x16c/0x174
 => ret_from_fork+0x14/0x28
 => 0
     irq/86-mmc1-80    [000] d.h.  1257.345533: irq_handler_exit: irq=86 ret=handled
     irq/86-mmc1-80    [000] d.h.  1257.345568: irq_handler_entry: irq=86 name=mmc1
     irq/86-mmc1-80    [000] d.h.  1257.345571: bcm2835_mmc_irq+0x14/0x6e8 <-__handle_irq_event_percpu+0x84/0x25c
     irq/86-mmc1-80    [000] d.h.  1257.345635: <stack trace>
 => bcm2835_mmc_irq+0x18/0x6e8
 => __handle_irq_event_percpu+0x84/0x25c
 => handle_irq_event_percpu+0x3c/0x90
 => handle_irq_event+0x54/0x78
 => handle_level_irq+0xd4/0x15c
 => generic_handle_irq+0x34/0x44
 => bcm2836_chained_handle_irq+0x48/0x4c
 => generic_handle_irq+0x34/0x44
 => __handle_domain_irq+0x6c/0xc4
 => bcm2836_arm_irqchip_handle_irq+0x60/0xa8
 => __irq_svc+0x5c/0x7c
 => wait_for_common+0x1a0/0x1d0
 => wait_for_common+0x1a0/0x1d0
 => wait_for_completion+0x20/0x24
 => mmc_wait_for_req_done+0x9c/0x118
 => mmc_wait_for_req+0xb0/0xe0
 => mmc_io_rw_extended+0x258/0x314
 => sdio_io_rw_ext_helper+0x144/0x1c0
 => sdio_writel+0x3c/0x4c
 => brcmf_sdiod_writel+0x60/0x88 [brcmfmac]
 => brcmf_sdio_intr_rstatus+0xa8/0xdc [brcmfmac]
 => brcmf_sdio_isr+0x9c/0xe4 [brcmfmac]
 => brcmf_sdiod_ib_irqhandler+0x3c/0x40 [brcmfmac]
 => process_sdio_pending_irqs+0x108/0x19c
 => sdio_run_irqs+0x44/0x60
 => bcm2835_mmc_thread_irq+0x54/0x98
 => irq_thread_fn+0x2c/0x88
 => irq_thread+0x164/0x240
 => kthread+0x16c/0x174
 => ret_from_fork+0x14/0x28
 => 0
     irq/86-mmc1-80    [000] d.h.  1257.345645: irq_handler_exit: irq=86 ret=handled
     irq/86-mmc1-80    [000] d.h.  1257.345649: irq_handler_entry: irq=86 name=mmc1
     irq/86-mmc1-80    [000] d.h.  1257.345651: bcm2835_mmc_irq+0x14/0x6e8 <-__handle_irq_event_percpu+0x84/0x25c
     irq/86-mmc1-80    [000] d.h.  1257.345715: <stack trace>
 => bcm2835_mmc_irq+0x18/0x6e8
 => __handle_irq_event_percpu+0x84/0x25c
 => handle_irq_event_percpu+0x3c/0x90
 => handle_irq_event+0x54/0x78
 => handle_level_irq+0xd4/0x15c
 => generic_handle_irq+0x34/0x44
 => bcm2836_chained_handle_irq+0x48/0x4c
 => generic_handle_irq+0x34/0x44
 => __handle_domain_irq+0x6c/0xc4
 => bcm2836_arm_irqchip_handle_irq+0x60/0xa8
 => __irq_svc+0x5c/0x7c
 => wait_for_common+0x1a0/0x1d0
 => wait_for_common+0x1a0/0x1d0
 => wait_for_completion+0x20/0x24
 => mmc_wait_for_req_done+0x9c/0x118
 => mmc_wait_for_req+0xb0/0xe0
 => mmc_io_rw_extended+0x258/0x314
 => sdio_io_rw_ext_helper+0x144/0x1c0
 => sdio_writel+0x3c/0x4c
 => brcmf_sdiod_writel+0x60/0x88 [brcmfmac]
 => brcmf_sdio_intr_rstatus+0xa8/0xdc [brcmfmac]
 => brcmf_sdio_isr+0x9c/0xe4 [brcmfmac]
 => brcmf_sdiod_ib_irqhandler+0x3c/0x40 [brcmfmac]
 => process_sdio_pending_irqs+0x108/0x19c
 => sdio_run_irqs+0x44/0x60
 => bcm2835_mmc_thread_irq+0x54/0x98
 => irq_thread_fn+0x2c/0x88
 => irq_thread+0x164/0x240
 => kthread+0x16c/0x174
 => ret_from_fork+0x14/0x28
 => 0
     irq/86-mmc1-80    [000] d.h.  1257.345721: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.  1257.345816: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.  1257.345819: bcm2835_mmc_irq+0x14/0x6e8 <-__handle_irq_event_percpu+0x84/0x25c
          <idle>-0     [000] d.h.  1257.345850: <stack trace>
 => bcm2835_mmc_irq+0x18/0x6e8
 => __handle_irq_event_percpu+0x84/0x25c
 => handle_irq_event_percpu+0x3c/0x90
 => handle_irq_event+0x54/0x78
 => handle_level_irq+0xd4/0x15c
 => generic_handle_irq+0x34/0x44
 => bcm2836_chained_handle_irq+0x48/0x4c
 => generic_handle_irq+0x34/0x44
 => __handle_domain_irq+0x6c/0xc4
 => bcm2836_arm_irqchip_handle_irq+0x60/0xa8
 => __irq_svc+0x5c/0x7c
 => arch_cpu_idle+0x34/0x4c
 => arch_cpu_idle+0x34/0x4c
 => default_idle_call+0x40/0x48
 => do_idle+0x124/0x164
 => cpu_startup_entry+0x28/0x2c
 => rest_init+0xb8/0xbc
 => start_kernel+0x48c/0x4b8
          <idle>-0     [000] d.h.  1257.345863: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.  1257.345909: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.  1257.345911: bcm2835_mmc_irq+0x14/0x6e8 <-__handle_irq_event_percpu+0x84/0x25c
          <idle>-0     [000] d.h.  1257.345939: <stack trace>
 => bcm2835_mmc_irq+0x18/0x6e8
 => __handle_irq_event_percpu+0x84/0x25c
 => handle_irq_event_percpu+0x3c/0x90
 => handle_irq_event+0x54/0x78
 => handle_level_irq+0xd4/0x15c
 => generic_handle_irq+0x34/0x44
 => bcm2836_chained_handle_irq+0x48/0x4c
 => generic_handle_irq+0x34/0x44
 => __handle_domain_irq+0x6c/0xc4
 => bcm2836_arm_irqchip_handle_irq+0x60/0xa8
 => __irq_svc+0x5c/0x7c
 => arch_cpu_idle+0x34/0x4c
 => arch_cpu_idle+0x34/0x4c
 => default_idle_call+0x40/0x48
 => do_idle+0x124/0x164
 => cpu_startup_entry+0x28/0x2c
 => rest_init+0xb8/0xbc
 => start_kernel+0x48c/0x4b8
          <idle>-0     [000] d.h.  1257.345948: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.  1257.346077: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.  1257.346079: bcm2835_mmc_irq+0x14/0x6e8 <-__handle_irq_event_percpu+0x84/0x25c
          <idle>-0     [000] d.h.  1257.346109: <stack trace>
 => bcm2835_mmc_irq+0x18/0x6e8
 => __handle_irq_event_percpu+0x84/0x25c
 => handle_irq_event_percpu+0x3c/0x90
 => handle_irq_event+0x54/0x78
 => handle_level_irq+0xd4/0x15c
 => generic_handle_irq+0x34/0x44
 => bcm2836_chained_handle_irq+0x48/0x4c
 => generic_handle_irq+0x34/0x44
 => __handle_domain_irq+0x6c/0xc4
 => bcm2836_arm_irqchip_handle_irq+0x60/0xa8
 => __irq_svc+0x5c/0x7c
 => arch_cpu_idle+0x34/0x4c
 => arch_cpu_idle+0x34/0x4c
 => default_idle_call+0x40/0x48
 => do_idle+0x124/0x164
 => cpu_startup_entry+0x28/0x2c
 => rest_init+0xb8/0xbc
 => start_kernel+0x48c/0x4b8
          <idle>-0     [000] d.h.  1257.346121: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.  1257.347342: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.  1257.347352: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.  1257.347354: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.  1257.347357: irq_handler_exit: irq=56 ret=unhandled
