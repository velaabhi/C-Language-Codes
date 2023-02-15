//21 July 22 - 3
// Prog to Concatinate str using own function amd pointer notation


#include<stdio.h>
#include<conio.h>

void strConcat(char *, char*);
void strConcat(char *p1, char *p2)
{
	while(*p1 != '\0')		// we use *p1 to check whether the value stored at that address is \0 or not and use that loop to count index
	{
		p1++;				
	}
	
	while(*p1 = *p2 != '\0')	//this loop is used to copy contents of *P2, starting at index of *p1 where \0 was encountered 
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
}
void main()
{
	char str1[15], str2[15];
	printf("\nEnter 1st string ");
	gets(str1);
	printf("\nEnter 2nd string ");
	gets(str2);
	strConcat(str1,str2);		//calling function
	printf("\nConcatinated string is ");
	puts(str1);			//result of concat is stored in str1
	getch();
}