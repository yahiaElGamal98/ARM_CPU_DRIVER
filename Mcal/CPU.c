/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  CPU.c
 *        \brief  CPU Driver
 *
 *      \details  Enable and disable interrupts and handle critical sections
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "../Common/Std_Types.h"
#include "./inc/CPU.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/	

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
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
void CPU_Driver_EnableGlobalInterrupts(void)
{
	__asm("CPSIE i");
}
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
void CPU_Driver_DisableGlobalInterrupts(void)
{
	__asm("CPSID i");
}

//void CPU_Driver_StartCriticalSection(void)
//{
//	register uint32 __regPriMask __asm("primask");
//	u32_primaskVal=__regPriMask;
//	__asm("CPSID i"); 		
//}

//void CPU_Driver_StopCriticalSection(void)
//{
//	register uint32 __regPriMask __asm("primask");
//	__regPriMask =u32_primaskVal;
//}

/**********************************************************************************************************************
 *  END OF FILE: CPU.c
 *********************************************************************************************************************/
