//14 Jul 22
// Swap 2 variable values without using 3rd variable(add subtract logic)

#include<stdio.h>
#include<conio.h>

void main()
{
	int x = 200,y = 100;
	printf("\n Before swapping Value of x = %d and y = %d ", x,y);
	x = x + y;
	y = x - y;
	x = x - y;
	printf("\n After swapping Value of x = %d and y = %d ", x,y);
	getch();
}