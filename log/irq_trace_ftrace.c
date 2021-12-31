# tracer: function
#
# entries-in-buffer/entries-written: 12716/12716   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
          <idle>-0     [000] d.H.   959.635489: irq_handler_exit: irq=56 ret=handled
             cat-811   [001] d...   959.637567: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2e0/0x3e4
             cat-811   [001] d...   959.637611: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2e0/0x3e4
 => seq_read+0x388/0x4d4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x16c
 => vfs_read+0x9c/0x164
 => ksys_read+0x74/0xe8
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed9a440
             cat-811   [001] d...   959.637620: rpi_get_interrupt_info+0x24/0x6c: [cat] 17: 3f00b880.mailbox, irq_handler: bcm2835_mbox_irq+0x0/0x94
             cat-811   [001] d...   959.637633: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2e0/0x3e4
             cat-811   [001] d...   959.637651: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2e0/0x3e4
 => seq_read+0x388/0x4d4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x16c
 => vfs_read+0x9c/0x164
 => ksys_read+0x74/0xe8
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed9a440
             cat-811   [001] d...   959.637656: rpi_get_interrupt_info+0x24/0x6c: [cat] 18: VCHIQ doorbell, irq_handler: vchiq_doorbell_irq+0x0/0x40
             cat-811   [001] d...   959.637683: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2e0/0x3e4
             cat-811   [001] d...   959.637701: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2e0/0x3e4
 => seq_read+0x388/0x4d4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x16c
 => vfs_read+0x9c/0x164
 => ksys_read+0x74/0xe8
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed9a440
             cat-811   [001] d...   959.637706: rpi_get_interrupt_info+0x24/0x6c: [cat] 40: bcm2708_fb DMA, irq_handler: bcm2708_fb_dma_irq+0x0/0x40
             cat-811   [001] d...   959.637719: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2e0/0x3e4
             cat-811   [001] d...   959.637737: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2e0/0x3e4
 => seq_read+0x388/0x4d4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x16c
 => vfs_read+0x9c/0x164
 => ksys_read+0x74/0xe8
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed9a440
             cat-811   [001] d...   959.637741: rpi_get_interrupt_info+0x24/0x6c: [cat] 42: DMA IRQ, irq_handler: bcm2835_dma_callback+0x0/0x12c
             cat-811   [001] d...   959.637753: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2e0/0x3e4
             cat-811   [001] d...   959.637771: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2e0/0x3e4
 => seq_read+0x388/0x4d4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x16c
 => vfs_read+0x9c/0x164
 => ksys_read+0x74/0xe8
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed9a440
             cat-811   [001] d...   959.637775: rpi_get_interrupt_info+0x24/0x6c: [cat] 44: DMA IRQ, irq_handler: bcm2835_dma_callback+0x0/0x12c
             cat-811   [001] d...   959.637794: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2e0/0x3e4
             cat-811   [001] d...   959.637812: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2e0/0x3e4
 => seq_read+0x388/0x4d4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x16c
 => vfs_read+0x9c/0x164
 => ksys_read+0x74/0xe8
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed9a440
             cat-811   [001] d...   959.637816: rpi_get_interrupt_info+0x24/0x6c: [cat] 56: dwc_otg, irq_handler: dwc_otg_common_irq+0x0/0x28
             cat-811   [001] d...   959.637846: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2e0/0x3e4
             cat-811   [001] d...   959.637864: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2e0/0x3e4
 => seq_read+0x388/0x4d4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x16c
 => vfs_read+0x9c/0x164
 => ksys_read+0x74/0xe8
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed9a440
             cat-811   [001] d...   959.637868: rpi_get_interrupt_info+0x24/0x6c: [cat] 80: mmc0, irq_handler: bcm2835_sdhost_irq+0x0/0x44c
             cat-811   [001] d...   959.637880: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2e0/0x3e4
             cat-811   [001] d...   959.637897: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2e0/0x3e4
 => seq_read+0x388/0x4d4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x16c
 => vfs_read+0x9c/0x164
 => ksys_read+0x74/0xe8
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed9a440
             cat-811   [001] d...   959.637901: rpi_get_interrupt_info+0x24/0x6c: [cat] 81: uart-pl011, irq_handler: pl011_int+0x0/0x45c
             cat-811   [001] d...   959.637916: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2e0/0x3e4
             cat-811   [001] d...   959.637934: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2e0/0x3e4
 => seq_read+0x388/0x4d4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x16c
 => vfs_read+0x9c/0x164
 => ksys_read+0x74/0xe8
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed9a440
             cat-811   [001] d...   959.637937: rpi_get_interrupt_info+0x24/0x6c: [cat] 86: mmc1, irq_handler: bcm2835_mmc_irq+0x0/0x6e8
             cat-811   [001] d...   959.638001: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2e0/0x3e4
             cat-811   [001] d...   959.638020: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2e0/0x3e4
 => seq_read+0x388/0x4d4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x16c
 => vfs_read+0x9c/0x164
 => ksys_read+0x74/0xe8
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed9a440
             cat-811   [001] d...   959.638023: rpi_get_interrupt_info+0x24/0x6c: [cat] 161: arch_timer, irq_handler: arch_timer_handler_phys+0x0/0x40
             cat-811   [001] d...   959.638035: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2e0/0x3e4
             cat-811   [001] d...   959.638053: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2e0/0x3e4
 => seq_read+0x388/0x4d4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x16c
 => vfs_read+0x9c/0x164
 => ksys_read+0x74/0xe8
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed9a440
             cat-811   [001] d...   959.638056: rpi_get_interrupt_info+0x24/0x6c: [cat] 162: arch_timer, irq_handler: arch_timer_handler_phys+0x0/0x40
             cat-811   [001] d...   959.638070: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2e0/0x3e4
             cat-811   [001] d...   959.638089: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2e0/0x3e4
 => seq_read+0x388/0x4d4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x16c
 => vfs_read+0x9c/0x164
 => ksys_read+0x74/0xe8
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed9a440
             cat-811   [001] d...   959.638093: rpi_get_interrupt_info+0x24/0x6c: [cat] 165: arm-pmu, irq_handler: armpmu_dispatch_irq+0x0/0x88
    kworker/u8:4-769   [000] d.h.   959.638764: irq_handler_entry: irq=86 name=mmc1
    kworker/u8:4-769   [000] d.h.   959.638772: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   959.638896: irq_handler_entry: irq=42 name=DMA IRQ
