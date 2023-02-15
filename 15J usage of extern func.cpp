//15 Jul 22
//Using Extern function to access global variables

#include<stdio.h>
#include<conio.h>

void main()
{
	extern int i;
	extern float pi;
	extern char c;
	printf("\nvalue of global i is %d",i);
	printf("\nvalue of global pi is %f",pi);
	printf("\nvalue of global c is %c",c);
	getch();

}