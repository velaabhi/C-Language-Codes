//21 July 22 - 5
// Prog to reverse str using std function strrev()


#include<stdio.h>
#include<conio.h>
#include<string.h>		//Header file for using func strrev

void main()
{
	char str1[15];
	printf("\nEnter string ");
	gets(str1);

	strrev(str1);		//std func strrev() to reverse the string contents
	printf("\nReversed string is ");
	puts(str1);
	getch();
}