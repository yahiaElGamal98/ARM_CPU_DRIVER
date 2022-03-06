/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  CPU.h
 *       Module:  CPU
 *
 *  Description:  header file for CPU Module    
 *  
 *********************************************************************************************************************/
#ifndef CPU_H
#define CPU_H

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
//#define CPU_DRIVER_InitCritical()  
/******************************************************************************
* \Syntax          : CPU_Driver_StartCriticalSection()                                      
* \Description     : Disable primask using CPS instructions                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
#define CPU_DRIVER_StartCriticalSection()		uint32 u32_primaskVal;\
																						register uint32 __regPriMask __asm("primask");\
																						u32_primaskVal=__regPriMask;\
																						__asm("CPSID i")
/******************************************************************************
* \Syntax          : void CPU_Driver_StopCriticalSection(void)                                      
* \Description     : Enable primask using CPS instructions                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
#define CPU_DRIVER_StopCriticalSection()		__regPriMask=u32_primaskVal

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
 
/******************************************************************************
* \Syntax          : void CPU_Driver_EnableGlobalInterrupts(void)                                      
* \Description     : Enable primask using CPS instructions                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void CPU_Driver_EnableGlobalInterrupts(void);
/******************************************************************************
* \Syntax          : void CPU_Driver_DisableGlobalInterrupts(void)                                      
* \Description     : Disable primask using CPS instructions                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void CPU_Driver_DisableGlobalInterrupts(void);
/******************************************************************************
* \Syntax          : void CPU_Driver_StartCriticalSection(void)                                      
* \Description     : Disable primask using CPS instructions                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void CPU_Driver_StartCriticalSection(void);
/******************************************************************************
* \Syntax          : void CPU_Driver_StopCriticalSection(void)                                      
* \Description     : Disable primask using CPS instructions                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void CPU_Driver_StopCriticalSection(void);
 
#endif  /* CPU_H */

/**********************************************************************************************************************
 *  END OF FILE: CPU.h
 *********************************************************************************************************************/
