//16 Jul 22
//miscellaneous macros #undef and #error... here our output is error so dont worry broo.. all is fine.. smile and move on

#include<stdio.h>
#include<conio.h>

#define MSG printf("Hello")

void main()
{
	MSG;		//Macro is called for 1st time
#undef MSG		// to remove #define from MSG
	MSG;		// now if you try to call it again after #undef then error will occur

#error "Dont worry, its ok, all is well"		
							//by using #error we can print user defined error message in error list
	getch();

}