// 25 July 22 - 2
//Wp for pointer to structure student with data memb roll,name and percentage

#include<stdio.h>
#include<conio.h>

struct student
{
	int roll;
	char name[15];
	float per;
};

void main()
{
	struct student s;	//variable declaration of "struct student" datatype
	struct student* p;	//pointer declaration

	p= &s ;		//assigning address of structure to  pointer
	printf("\nEnter Roll no, Name, Percentage");
	scanf("%d%s%f",&p->roll,p->name,&p->per);		// "->" arrow operator is used for pointer
	
	printf("Roll = %d, Name =%s, Percentage = %f",p->roll,p->name,p->per);
	getch();

}