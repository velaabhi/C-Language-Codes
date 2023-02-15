//21 July 22 - 1
// Prog to Concatinate str using std function strcat(str1,str2)

#include<stdio.h>
#include<conio.h>
#include<string.h>		//we include this header file to use the function strcat()

void main()
{
	char str1[15], str2[15];
	printf("\nEnter 1st string ");
	gets(str1);
	printf("\nEnter 2nd string ");
	gets(str2);
	strcat(str1,str2);		//std function to concatinate 2 strings
	printf("\nConcatinated string is ");
	puts(str1);			//result of concat is stored in str1
	getch();
}