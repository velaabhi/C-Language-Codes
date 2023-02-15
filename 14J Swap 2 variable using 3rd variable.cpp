//14 Jul 22
// Swap 2 variable values using 3rd variable

#include<stdio.h>
#include<conio.h>

void main()
{
	int x = 200,y = 100, temp;
	printf("\n Before swapping Value of x = %d and y = %d ", x,y);
	temp = x;
	x = y;
	y = temp;
	printf("\n After swapping Value of x = %d and y = %d ", x,y);
	getch();
}