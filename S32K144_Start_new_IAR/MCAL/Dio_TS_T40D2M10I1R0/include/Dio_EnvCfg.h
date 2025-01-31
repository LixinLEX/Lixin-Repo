/**
*   @file    Dio_EnvCfg.h
*   @version 1.0.1
*
*   @brief   AUTOSAR Dio - Dio driver header file.
*   @details DIO driver header file, containing variables, functions prototypes, data types and/or
*            defines and macros that:
*            - are Autosar specific and are not exported by the DIO driver.
*            - are not related to the DIO driver related IPs.
*
*   @addtogroup DIO_MODULE
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.2 MCAL
*   Platform             : ARM
*   Peripheral           : GPIO
*   Dependencies         : none
*
*   Autosar Version      : 4.2.2
*   Autosar Revision     : ASR_REL_4_2_REV_0002
*   Autosar Conf.Variant :
*   SW Version           : 1.0.1
*   Build Version        : S32K14x_MCAL_1_0_1_RTM_ASR_REL_4_2_REV_0002_20180713
*
*   (c) Copyright 2006-2016 Freescale Semiconductor, Inc. 
*       Copyright 2017-2018 NXP
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/

#ifndef DIO_ENVCFG_H
#define DIO_ENVCFG_H

#ifdef __cplusplus
extern "C"{
#endif
/**
* @page misra_violations MISRA-C:2004 violations
*
* @section [global]
*          Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely
*          on the significance of more than 31 characters. The used compilers use more than 31 chars for identifiers.
*
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include  "Std_Types.h"

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define DIO_ENVCFG_VENDOR_ID                      43
#define DIO_ENVCFG_AR_RELEASE_MAJOR_VERSION       4
#define DIO_ENVCFG_AR_RELEASE_MINOR_VERSION       2
#define DIO_ENVCFG_AR_RELEASE_REVISION_VERSION    2
#define DIO_ENVCFG_SW_MAJOR_VERSION               1
#define DIO_ENVCFG_SW_MINOR_VERSION               0
#define DIO_ENVCFG_SW_PATCH_VERSION               1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if header file and Std_Types.h file are of the same Autosar version */
    #if ((DIO_ENVCFG_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
         (DIO_ENVCFG_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)    \
        )
        #error "AutoSar Version Numbers of Dio_EnvCfg.h and Std_Types.h are different"
    #endif
#endif

/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

#define DIO_QM  (STD_OFF)
#define DIO_FTE (STD_ON)
#define DIO_GTE (STD_OFF)
#define DIO_NTE (STD_OFF)  

#if (DIO_FTE == STD_ON)
    #define DIO_VALIDATE_PARAMS  (DIO_DEV_ERROR_DETECT)
#endif 

/*==================================================================================================
                                             ENUMS
==================================================================================================*/


/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /*DIO_ENVCFG_H*/

/** @} */
