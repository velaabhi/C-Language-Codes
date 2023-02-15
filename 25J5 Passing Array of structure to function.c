//25 July 22 - 5
//Passing Array of Structure to function

#include<conio.h>
#include<stdio.h>
int i = 0 ;
typedef struct student		//structure defination
{
	int roll;
	char name[10];
	float per;
}stud;

void accept(stud s[]);		//"s[]" is array of "stud" datatype
void display(stud s[]);

void accept(stud s[])
{	
	printf("\nAccept info for 3 students");
	for(i=0;i<3;i++)
	{
		printf("\nEnter Roll, Name, Percent of student number %d ",i+1);
		scanf("%d%s%f",&s[i].roll,s[i].name,&s[i].per);			//Using dot operator to access the values
	}
}

void display(stud s[])
{
	
	for(i=0;i<3;i++)
	{
		printf("\nDisplaying info of student number %d ",i+1);
		printf("\n Roll = %d, Name = %s, Percent = %f",s[i].roll,s[i].name,s[i].per); //Using dot operator to access the values
	}
}

void main()
{
	stud s[3];						//array of structure
	printf("\nEnter information");
	accept(s);
	display(s);
	getch();
}