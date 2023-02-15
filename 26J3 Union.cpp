// 26 Jul 22 - 3
//Union

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

union student
{
	int roll;
	char name[10];
	float per;
};

void main()
{
	union student u;
	
	printf("\nEnter Roll");
	scanf("%d",&u.roll);
	printf("\nRoll is %d",u.roll);

	printf("\n\nEnter Name");
	scanf("%s",u.name);
	printf("\nName is %s",u.name);
		
	printf("\n\nEnter Percent");
	scanf("%f",&u.per);
	printf("\nPercentage is %f",u.per);

	getch();
}
