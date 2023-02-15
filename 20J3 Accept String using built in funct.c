//20 July 22-3
//Accepting String using Built in Function gets() and puts();

#include<stdio.h>
#include<conio.h>


void main()
{
	char str[15];
	printf("\nEnter string ");
	gets(str);			//str is passed to gets function
						// also we can use space between two words during input which is not possible during str lit
	printf("\nDisplay string ");
	puts(str);			//str is passed to puts function
	getch();
}