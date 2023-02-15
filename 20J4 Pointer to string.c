//20 July 22-4
//Pointer to String character by character display 

#include<stdio.h>
#include<conio.h>

void main()
{
	char str[15];
	char *p = str;		// datatype of pointer is same as the datatype of variable it has to point to 
						//it is so because when we perform increment decrement  ops pointing will be according to the size of that datatype

	printf("\nEnter string ");
	gets(str);			//str is passed to gets function
	
	printf("\nDisplay string ");
	while(*p != '\0')	// *p is used to access value of str array
	{
		printf("%c",*p);
		p++;			//pointer increment to next value by 1byte (1 byte cz its character datatype)
	}
		
	getch();
}