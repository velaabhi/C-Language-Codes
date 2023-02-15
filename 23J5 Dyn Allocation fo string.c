//23 July 22 - 5
//Dynamic Memory Allocation for String 

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>		//we have to include Header file <stdlib.h> to use malloc() function
#include<string.h>		// we have to use strlen() and strcpy() functions hence this header file

void main()
{
	char temp[10];
	char *str;

	printf("\nEnter string ");
	gets(temp);

	str = (char *)malloc(strlen(temp)+1*sizeof(char));
	strcpy(str,temp);

	printf("Display string ");
	puts(str);
	free(str);
	getch();

}