/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TSC_Dcm.c
 *        Config:  S32K144_Start.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_Dcm.h"
#include "TSC_Dcm.h"















     /* Client Server Interfaces: */


     /* Service calls */
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_WriteData(Data, OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_SecurityAccess_Level_01_CompareKey(const uint8 *Key, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_SecurityAccess_Level_01_CompareKey(Key, OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_SecurityAccess_Level_01_GetSeed(Dcm_OpStatusType OpStatus, uint8 *Seed, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_SecurityAccess_Level_01_GetSeed(OpStatus, Seed, ErrorCode);
}


     /* Mode Interfaces */

Std_ReturnType TSC_Dcm_Rte_Switch_DcmControlDtcSetting_DcmControlDtcSetting(Dcm_ControlDtcSettingType mode)
{
  return Rte_Switch_DcmControlDtcSetting_DcmControlDtcSetting( mode);
}
Std_ReturnType TSC_Dcm_Rte_Switch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(Dcm_DiagnosticSessionControlType mode)
{
  return Rte_Switch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl( mode);
}
Std_ReturnType TSC_Dcm_Rte_Switch_DcmEcuReset_DcmEcuReset(Dcm_EcuResetType mode)
{
  return Rte_Switch_DcmEcuReset_DcmEcuReset( mode);
}

Std_ReturnType TSC_Dcm_Rte_SwitchAck_DcmEcuReset_DcmEcuReset(void)
{
  return Rte_SwitchAck_DcmEcuReset_DcmEcuReset();
}


     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */







     /* Dcm */
      /* Dcm */



