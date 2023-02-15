//14 Jul 22
// WP to read radius from user and find area and circumference using pass by address and display in main

#include<stdio.h>
#include<conio.h>

void areaCircum(int ,float*, float*);		//func decl
void areaCircum(int r, float*ar, float*cr)
{
	float a,c;
	a = 3.14 * r * r;
	c = 2 * 3.14 * r;
	*ar = a;						//star ar will store value of a
	*cr = c;					    //star cr will store value of c

}

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