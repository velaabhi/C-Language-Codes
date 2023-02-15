//15 Jul 22
// prog to cal area and circum using own header file  

#include<stdio.h>
#include<conio.h>
#include "15Jmyheader.h"


void main()
{
	int r;
	float area, circum;
	printf("\n Enter value of Radius");
	scanf("%d",&r);

	areaCircum(r,&area,&circum);		//passing value of r and addr of area & circum

	printf("\n Area of Circle is %f",area);
	printf("\n Circumference of Circle is %f",circum);
	getch();
}