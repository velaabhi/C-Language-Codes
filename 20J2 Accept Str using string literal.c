//20 July 22-1
//Accepting String using String literal %s

#include<stdio.h>
#include<conio.h>

void main()
{
	char str[15];
	printf("\nEnter string ");
	scanf("%s",str);			//str has address of the array hence no need of '&' 
	printf("\nDisplay string ");
	printf("%s",str);			// no need to append \0
	getch();
}