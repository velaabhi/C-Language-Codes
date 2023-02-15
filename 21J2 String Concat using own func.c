//21 July 22 - 2
// Prog to Concatinate str using own function 


#include<stdio.h>
#include<conio.h>

void strConcat(char [], char[]);
void strConcat(char str1[], char str2[])
{
	int i=0,j=0;
	while(str1[i] != '\0')		// we use i a counter to count the index at which \0 appears 
	{
		i++;				
	}
								// now i has some index value which is then sent to next while loop, i andj are not equal
	while(str1[i]=str2[j] != '\0')	//this loop is used to copy contents of str2 from jth location to contents, after ith location of str1[] 
	{
		str1[i] = str2[j];
		i++;
		j++;
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