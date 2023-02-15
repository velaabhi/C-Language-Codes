//16 Jul 22
// Conditional Compilation using #ifndef  #else #endif - when macro is not defined #ifndef will work else #else will work

#include<stdio.h>
#include<conio.h>

#define MSG printf("\n\nHello")    // in 1st case we will not use it in 2nd case we will use it

void main()
{
#ifndef MSG						//Conditional Compilation using #ifndef #else #endif
	printf("Macro is not defined");
	printf("\nSo lets define and call our Macro ");
#define MSG printf("\nHello");
	MSG;
#else
	printf("Macro is  defined");
	MSG;
#endif
	getch();
}