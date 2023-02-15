// 26 Jul 22 - 1
//Nested Structure

#include<stdio.h>
#include<conio.h>

typedef struct student
{
	int roll;
	char name[10];
	float per;
}stud;

struct address
{
	char city[10];
	stud s;				//Nested structutre - student called in address
};

void main()
{
	struct address a;		//variable declaration
	printf("\nEnter roll, Name, Percentage and city");
	scanf("%d%s%f%s",&a.s.roll,a.s.name,&a.s.per,a.city);

	printf("Roll = %d, Name = %s, Percent = %f and city = %s",a.s.roll,a.s.name,a.s.per,a.city);
	getch();
}