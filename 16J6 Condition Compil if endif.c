//16 Jul 22
// Conditional Compilation using #if #else #endif

#include<stdio.h>
#include<conio.h>

#define BAL 500

void main()
{
#if(BAL<1000)						//Conditional Compilation using #if #else #endif
	printf("Insufficient Bal");
#else
	printf("Sufficient Bal, withdraw money");
#endif
	getch();
}