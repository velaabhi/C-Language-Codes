//20 July 22-5
//Find string length by using standard funtion "strlen()"

#include<stdio.h>
#include<conio.h>
#include<string.h>		//to use standard func of strlen() we have to include "#inlcude<string.h>" header file

void main()
{
	char str[15];
	int len;
	printf("\nEnter string ");
	gets(str);		//gets() is scanf equvivalent for string

	len = strlen(str);
	printf("Length of the string is %d ",len);

	getch();
}