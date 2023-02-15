//18 Jul 22 -6
//Accept rainfall in mm over a period of 1 week & display average 
#include<stdio.h>
#include<conio.h>

void main()
{
	int ar[5]={10,20,30,40,50};
	int *p1 = &ar[0];
	int *p2 = &ar[2];
	int res;
	printf("\nValue of p1 = %d & p2= %d",*p1,*p2);

	p1++;
	printf("\nValue of p1 = %d ",*p1);

	p2--;
	printf("\nValue of p2 = %d ",*p2);

	p2 = p2+2;
	printf("\nValue of p1 = %d ",*p2);

	res = *p1 + *p2;
	printf("\nResult  = %d ",res);

	getch();
}