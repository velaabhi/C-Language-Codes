//20 July 22-9
//Copying string by own funtion 

#include<stdio.h>
#include<conio.h>

void stringCopy(char [], char[]);		//void cz we donot return here anything as operation is performed on address, which is accessible from main also
void stringCopy(char str2[], char str1[])	
{
	int i=0;
	while(str2[i] = str1[i] != '\0')	//we cannot use && operator
	{
		str2[i] = str1[i];
		i++;
	}

}
void main()
{
	char str1[15],str2[15];
	printf("Enter string 1  ");
	gets(str1);

//	printf("\nDisplay str 2 before copying str1 ");		//doubt here ask 
//	puts(str2);	
	
	stringCopy(str2,str1);		// calling function 
	printf("\nDisplay str 2 after copying str1 is ");
	puts(str2);
	getch();
}