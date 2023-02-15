//21 July 22 - 7
//String Compare using own function

#include<stdio.h>
#include<conio.h>

int strComp(char str1[],char str2[]);
int strComp(char str1[],char str2[])
{
	int i=0;
	do
	{
		if (str1[i] < str2[i])
			return 1;
		else if(str1[i] > str2[i]) 
			return -1;
		else
			return 0;
		i++;
	}while(str1[i]=str2[i] != '\0');
	
}


void main()
{
	int res;
	char str1[15], str2[15];
	printf("\nEnter string 1 ");
	gets(str1);
	printf("\nEnter string 2 ");
	gets(str2);

	res = strComp(str1,str2);
	if (res == 1)
		printf("\nString 2 is greater than string 1");
	else if(res == -1)
		printf("\nString 1 is greater than string 2");
	else 
		printf("\nBoth are equal");
	getch();
}