/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2018 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**
 * \addtogroup  Os_Hal_Derivative
 * \{
 *
 * \file
 * \brief  This file contains derivative specific information.
 *
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 *********************************************************************************************************************/

#if !defined (OS_HAL_DERIVATIVE_IMX8XINT_H) /* PRQA S 0883 */ /* MD_Os_Hal_0883 */
# define OS_HAL_DERIVATIVE_IMX8XINT_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  IMX8x
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  Core
 *********************************************************************************************************************/
/*! Defines whether ARMv7 CortexM Architecture is supported (STD_ON) or not (STD_OFF). */
# define OS_HAL_ARCH_V7M     (STD_ON)

/*! Defines whether V7M Exceptions Handling is supported (STD_ON) or not (STD_OFF). */
# define OS_HAL_EXCEPTIONS_V7M     (STD_ON)


/**********************************************************************************************************************
 *  Interrupt Controller
 *********************************************************************************************************************/

/*! Defines whether NVIC_IMX8 interrupt controller is supported (STD_ON) or not (STD_OFF). */
# define OS_HAL_INTC_NVIC_IMX8      (STD_ON)

/*! NVIC, base address. */
# define OS_HAL_INTC_NVIC_BASE              (0xE000E000UL)

/*! STEER, base address. */
# define OS_HAL_INTC_STEER_BASE              (0x51070000UL)

/*! STEER_CHN_STATUS address. */
# define OS_HAL_STEER_CHN_STATUS_ASM          0x51070084
# define OS_HAL_STEER_CHN_STATUS_BASE        (0x51070084UL)

/*! STEER_CHN_MASK address. */
# define OS_HAL_STEER_CHN_MASK_ASM          0x51070004
# define OS_HAL_STEER_CHN_MASK_BASE        (0x51070004UL)

/*! Number of available IRQ. */
# define OS_HAL_INTC_NUMBER_OF_IRQS     (512UL)

/**********************************************************************************************************************
 *  Timer
 *********************************************************************************************************************/
/*! Defines whether FRT_UNSUPPORTED Timer Unit is supported (STD_ON) or not (STD_OFF). */
# define OS_HAL_TIMER_FRT_UNSUPPORTED     (STD_ON)

/*! Defines whether PIT_SYSTICK Timer Unit is supported (STD_ON) or not (STD_OFF). */
# define OS_HAL_TIMER_PIT_SYSTICK     (STD_ON)


/**********************************************************************************************************************
 *  Memory Protection
 *********************************************************************************************************************/
/*! Defines whether PMSAV7M Memory Protection Architecture is supported (STD_ON) or not (STD_OFF). */
# define OS_HAL_MEMORY_PROTECTION_PMSAV7M         (STD_ON)
# define OS_HAL_MPU_BASE_ADDRESS_ASM              0xE000ED98
# define OS_HAL_MPU_BASE_ADDRESS                  (0xE000ED98UL)


#endif /* OS_HAL_DERIVATIVE_IMX8XINT_H */

/*!
 * \}
 */
/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_Derivative_IMX8xInt.h
 *********************************************************************************************************************/
