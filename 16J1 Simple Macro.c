//16 Jul 22
// Simple Macro with no arguments

#include<stdio.h>
#include<conio.h>

#define MSG printf("Hello")		//Macro defined
void main()
{
	MSG;		//when macro is called, it gets replace by text "printf("Hello")"
	getch();
}
