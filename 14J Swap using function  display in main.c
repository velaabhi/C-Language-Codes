//14 Jul 22
// Swap 2 variable values using  function pass by address and  displ in main 

#include<stdio.h>
#include<conio.h>
#include"15Jmyheader.h"

void main()
{
	int x = 200, y=100;
	printf("\n Before swapping Value of x = %d and y = %d ", x,y);
	swap(&x,&y);														//func call passed by address
	printf("\n After swapping Value of x = %d and y = %d ", x,y);		

	getch();
}