//14 Jul 22
// Use of pointer variable

#include<stdio.h>
#include<conio.h>

void main()
{
	int x = 10;		//declaring variable x
	int *p;			// declaring pointer variable *p to same datatype because it stores value of x

	p = &x;
	printf("\nValue of x using percentd %d",x);
	printf("\nValue of x using percentu %u",x);

	printf("\n\nAddress of x using and operator and percent d %d",&x);
	printf("\nAddress of x using and operator and percent u %u",&x);

	printf("\n\nValue of p %d",p);
	printf("\nValue of x using pointer starp %d",*p);

	printf("\n\nAddress of p using and operator and percent d %d",&p);
	printf("\nAddress of p using and operator and percent u %u",&p);

	getch();
}