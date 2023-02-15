//20 July 22-10
//Copying string by own funtion and pointer

#include<stdio.h>
#include<conio.h>

void stringCopy(char *, char*);		//void cz we donot return here anything as operation is performed on address, which is accessible from main also
void stringCopy(char *p2, char *p1)	
{
	while(*p2 = *p1 != '\0')
	{
		*p2 = *p1;
		p2++;
		p1++;
	}

}
void main()
{
	char str1[15],str2[15];
	printf("Enter string 1  ");
	gets(str1);

	printf("\nDisplay str 2 before copying str1 ");		//doubt here ask 
	puts(str2);	
	
	stringCopy(str2,str1);		// calling function 
	printf("\nDisplay str 2 after copying str1 is ");
	puts(str2);
	getch();
}