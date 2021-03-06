/*****************************************************************************
*
* @brief DO NOT MODIFY THIS FILE. This file is automatically generated by
* bear-gen. BEAR SoC memory map and defines.
*
* @author alexander.kozlov@cloudbear.ru
* @author denis.ivanov@cloudbear.ru
*
* Copyright (c) 2018 CloudBEAR LLC, all rights reserved.
* THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY COPYRIGHT LAWS AND
* IS CONSIDERED A TRADE SECRET BELONGING TO THE CLOUDBEAR LLC.
*
*****************************************************************************/
 #ifndef __BEAR_SOC_H_
 #define __BEAR_SOC_H_
//
// Clock defines
//
// Clock frequency for core
 #define BEAR_CORE_CLK_FREQ_MHZ 50
// Clock frequency for peripheral devices (could be differ from core clock)
 #define BEAR_PERIPH_CLK_FREQ_MHZ 25
//
// SoC parameters in BOOT ROM
//
 #define BEAR_BOOT_ROM_BASE 0x00001000
 #define BEAR_BOOT_ROM_SIZE 4096
 #define BEAR_SOC_N_HARTS_ADDR (BEAR_BOOT_ROM_BASE + 0x028)
 #define BEAR_SOC_N_EXT_INT_ADDR (BEAR_BOOT_ROM_BASE + 0x02C)
 #define BEAR_SOC_MAX_PRI_ADDR (BEAR_BOOT_ROM_BASE + 0x030)
 #define BEAR_PLATFORM_DESC_ADDR (BEAR_BOOT_ROM_BASE + BEAR_BOOT_ROM_SIZE - 128)
//
// CLINT defines
//
// CLINT base address
 #define BEAR_CLINT_BASE 0x02000000
// CLINT machine software interrupt pending register (per hart)
 #define BEAR_CLINT_MSIP(hartid) (BEAR_CLINT_BASE + 0x004 * (hartid))
//
// PLIC defines
//
// Platform Level Interrupt Controller configuration
 #define BEAR_PLIC_BASE 0x0C000000
// Base address of source interrupt priority
 #define BEAR_PLIC_PRI_BASE (BEAR_PLIC_BASE)
// Base address of interrupt pending mask
 #define BEAR_PLIC_IPM_BASE (BEAR_PLIC_BASE + 0x1000)
// Base address of interrupt enable mask
 #define BEAR_PLIC_IEM_BASE (BEAR_PLIC_BASE + 0x2000)
// Base address of context control
 #define BEAR_PLIC_CTX_BASE (BEAR_PLIC_BASE + 0x200000)
// Priority for interrupt
 #define BEAR_PLIC_ADDR_PRI(intid) (BEAR_PLIC_PRI_BASE + 4 * (intid))
// PLIC registers for context control
 #define BEAR_PLIC_ADDR_PRI_THR(ctxid) (BEAR_PLIC_CTX_BASE + (ctxid) * 0x1000 + 0x000)
 #define BEAR_PLIC_ADDR_ICC(ctxid) (BEAR_PLIC_CTX_BASE + (ctxid) * 0x1000 + 0x004)
//
// GPIO defines
//
// GPIO base address
 #define BEAR_GPIO_BASE 0x10012000
 #define BEAR_GPIO_BASE_VAL (BEAR_GPIO_BASE + 0x000)
 #define BEAR_GPIO_BASE_DIR (BEAR_GPIO_BASE + 0x100)
 #define BEAR_GPIO_BASE_OUT (BEAR_GPIO_BASE + 0x200)
 #define BEAR_GPIO_BASE_IEM (BEAR_GPIO_BASE + 0x300)
 #define BEAR_GPIO_BASE_IPM (BEAR_GPIO_BASE + 0x400)
// GPIO interrupt range
 #define BEAR_GPIO_IRQ_START 2
//
// UART defines
//
// UART base address
 #define BEAR_UART_0_BASE 0x10013000
 #define BEAR_UART_1_BASE 0x10014000
// UART_0 registers
 #define BEAR_UART_0_ADDR_TXDATA (BEAR_UART_0_BASE + 0x000)
 #define BEAR_UART_0_ADDR_RXDATA (BEAR_UART_0_BASE + 0x008)
 #define BEAR_UART_0_ADDR_TXCTRL (BEAR_UART_0_BASE + 0x010)
 #define BEAR_UART_0_ADDR_RXCTRL (BEAR_UART_0_BASE + 0x018)
 #define BEAR_UART_0_ADDR_STATUS (BEAR_UART_0_BASE + 0x020)
 #define BEAR_UART_0_ADDR_ERROR (BEAR_UART_0_BASE + 0x028)
 #define BEAR_UART_0_ADDR_BAUD_DIV (BEAR_UART_0_BASE + 0x030)
 #define BEAR_UART_0_ADDR_IE (BEAR_UART_0_BASE + 0x038)
 #define BEAR_UART_0_ADDR_IP (BEAR_UART_0_BASE + 0x040)
// UART_1 registers
 #define BEAR_UART_1_ADDR_TXDATA (BEAR_UART_1_BASE + 0x000)
 #define BEAR_UART_1_ADDR_RXDATA (BEAR_UART_1_BASE + 0x008)
 #define BEAR_UART_1_ADDR_TXCTRL (BEAR_UART_1_BASE + 0x010)
 #define BEAR_UART_1_ADDR_RXCTRL (BEAR_UART_1_BASE + 0x018)
 #define BEAR_UART_1_ADDR_STATUS (BEAR_UART_1_BASE + 0x020)
 #define BEAR_UART_1_ADDR_ERROR (BEAR_UART_1_BASE + 0x028)
 #define BEAR_UART_1_ADDR_BAUD_DIV (BEAR_UART_0_BASE + 0x030)
 #define BEAR_UART_1_ADDR_IE (BEAR_UART_1_BASE + 0x038)
 #define BEAR_UART_1_ADDR_IP (BEAR_UART_1_BASE + 0x040)
// UART interrupt priority
 #define BEAR_UART_0_IRQ_PRIORITY 1
 #define BEAR_UART_1_IRQ_PRIORITY 1
// UART interrupt number
 #define BEAR_UART_0_IRQ (RISCV_MAX_GENERIC_IRQ + 1)
 #define BEAR_UART_1_IRQ (RISCV_MAX_GENERIC_IRQ + 2)
// UART default baud rate
 #define BEAR_UART_0_BAUD_RATE 460800
 #define BEAR_UART_1_BAUD_RATE 9600
//
// PCIe defines
//
// Base address of MMRs for sending message signalling interrupt (MSI) via PCIe subsystem
 #define BEAR_PCIE_MSI_BASE 0x40E00000
//
// RISC-V common defines
//
// Timer configuration
 #define RISCV_MTIME_BASE (BEAR_CLINT_BASE + 0xBFF8)
 #define RISCV_MTIMECMP_BASE (BEAR_CLINT_BASE + 0x4000)
 #define RISCV_MTIMECMP(hartid) (RISCV_MTIMECMP_BASE + 0x008 * (hartid))
 #endif /* __BEAR_SOC_H_ */
