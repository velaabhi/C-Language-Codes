// 25 July 22 - 1
//Create structure student with data memb roll,name and percentage

#include<stdio.h>
#include<conio.h>

struct student				//structure defina
{
	int roll;
	char name[10];
	float per;
};							//end defination with ;

void main()
{
	struct student s;		//varibale declaration(s) for the struct student
							//"struct student" is datatype
	printf("\nEnter Roll no");
	scanf("%d",&s.roll);
	printf("\nEnter Name");
	scanf("%s",&s.name);
	printf("\nEnter Percentage");
	scanf("%f",&s.per);

	printf("Roll = %d, Name =%s, Percentage = %f",s.roll,s.name,s.per);
	getch();
}