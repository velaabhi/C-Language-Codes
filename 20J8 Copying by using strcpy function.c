//20 July 22-8
//Copying string by using std funtion strcpy

#include<stdio.h>
#include<conio.h>
#include<string.h>		//to use copy function  "strcpy(destination,source)" copy function

void main()
{
	char str1[15],str2[15];
	printf("\nEnter String ");
	scanf("%s",str1);		//gets() can also be used
	strcpy(str2,str1);
	printf("\nDisplay string  ");
	puts(str2);
	getch();
}