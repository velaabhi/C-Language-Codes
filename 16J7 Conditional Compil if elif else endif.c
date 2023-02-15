//16 Jul 22
// Conditional Compilation using #if #elif #else #endif

#include<stdio.h>
#include<conio.h>

#define N 9

void main()
{
#if(N==50)						//Conditional Compilation using #if #else #endif
	printf("Fifty");
#elif(N==100)
	printf("Hundred");
#elif(N==500)
	printf("Five Hundred");
#else
	printf("Number is anything");
#endif
	getch();
}