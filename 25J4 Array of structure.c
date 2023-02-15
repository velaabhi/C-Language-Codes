// 25 July 22 - 4
//Wp for Array of structure  student with data memb roll,name and percentage

#include<stdio.h>
#include<conio.h>

typedef struct student		//to change the name of datatype to anyother name
{
	int roll;
	char name[15];
	float per;
}stud;						//we changed name of datatype "struct student" to "stud"


void main()
{
	stud s[5];
	int i;

	printf("Accept information");
	for(i=0;i<3;i++)
	{
		printf("\nEnter Roll no, Name and Percentage");
		scanf("%d%s%f",&s[i].roll,s[i].name,&s[i].per);
	}

	printf("\nDisplay information");
	for(i=0;i<3;i++)
	{
		printf("\nEnter Roll no = %d, Name = %s and Percentage = %f",s[i].roll,s[i].name,s[i].per);
	}
	
	getch();
}