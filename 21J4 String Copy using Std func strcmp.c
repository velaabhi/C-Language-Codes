//21 July 22 - 4
// Prog to Compare 2 str using std function strcmp()


#include<stdio.h>
#include<conio.h>
#include<string.h>		//Header file for using func strcmp

void main()
{
	int res;
	char str1[15],str2[15];
	printf("\nEnter string 1 ");
	gets(str1);
	printf("\nEnter string 2 ");
	gets(str2);

	res = strcmp(str1,str2);		//strcmp returns integer value hence we need an int varibale to store it

	if(res == -1)
		printf("string 2 is greater than string 1");
	else if(res == 1)
		printf("string 1 is greater than string 2");
	else 
		printf("both strings are equal");
	getch();
}

