#include"../MCAL/inc/CPU.h"
#include"../Common/Std_Types.h"

int main(){
	CPU_DRIVER_StartCriticalSection();
	CPU_DRIVER_StopCriticalSection();
	return 0;
}
