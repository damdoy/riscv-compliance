// RISC-V Compliance Test Header File
// Copyright (c) 2017, Codasip Ltd. All Rights Reserved.
// See LICENSE for license details.
//
// Description: Common header file for RV32I tests

#ifndef _COMPLIANCE_TEST_H
#define _COMPLIANCE_TEST_H

#include "riscv_test.h"

//-----------------------------------------------------------------------
// RV Compliance Macros BEFORE
//-----------------------------------------------------------------------

//#define RV_COMPLIANCE_HALT                                                    \
//        RVTEST_PASS                                                           \

//#define RV_COMPLIANCE_RV32M                                                   \
        RVTEST_RV32M                                                          \

//#define RV_COMPLIANCE_CODE_BEGIN                                              \
        RVTEST_CODE_BEGIN                                                     \

//#define RV_COMPLIANCE_CODE_END                                                \
        RVTEST_CODE_END                                                       \

//#define RV_COMPLIANCE_DATA_BEGIN                                              \
        RVTEST_DATA_BEGIN                                                     \

//#define RV_COMPLIANCE_DATA_END                                                \
        RVTEST_DATA_END                                                       \

//-----------------------------------------------------------------------
// RV Compliance Macros AFTER
//-----------------------------------------------------------------------

#define RV_COMPLIANCE_HALT

#define RV_COMPLIANCE_RV32M

#define RV_COMPLIANCE_CODE_BEGIN                                        \
        .section .text.init;                                            \
        .align  6;                                                      \
        .weak stvec_handler;                                            \
        .weak mtvec_handler;                                            \
        .globl _start;                                                  \
_start:                                                                 \
      //   /* reset vector */                                              \
      //   j reset_vector;                                                 \
      //   .align 2;

#define RV_COMPLIANCE_CODE_END

#define RV_COMPLIANCE_DATA_BEGIN \
  RVTEST_DATA_BEGIN

#define RV_COMPLIANCE_DATA_END \
  RVTEST_DATA_END

#endif
