//16 Jul 22
// Conditional Compilation using #ifdef  #else #endif - when macro is defined #ifdef will work else #else will work

#include<stdio.h>
#include<conio.h>

// #define MSG printf("Hello")    - in 1 case we will use it in 2nd case we will not use it

void main()
{
#ifdef MSG						//Conditional Compilation using #ifdef #else #endif
	printf("Macro is defined");

#else
	printf("Macro is not defined");
#endif
	getch();
}