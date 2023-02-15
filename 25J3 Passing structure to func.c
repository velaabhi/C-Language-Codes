// 25 July 22 - 3
//Wp for Passing structure to func student with data memb roll,name and percentage

#include<stdio.h>
#include<conio.h>

typedef struct student		//to change the name of datatype to anyother name
{
	int roll;
	char name[15];
	float per;
}stud;						//we changed name of datatype "struct student" to "stud"

stud accept();
void display (stud);

stud accept()			//return type is stud cz func will be returning stud datatype
{
	stud s;				//variable declaration  "s" of datatype stud
	printf("\nEnter Roll no, Name and Percentage");
	scanf("%d%s%f",&s.roll,s.name,&s.per);
	return s;			//returning s
}

void display(stud s)		//parameters has datatype "stud" and variable name "s"
{
	printf("\nEnter Roll no = %d, Name = %s and Percentage = %f9",s.roll,s.name,s.per);
}

void main()
{
	stud s1,s2,s3;
	
	s1 = accept();
	display(s1);

	s2 = accept();
	display(s2);

	s3= accept();
	display(s3);

	getch();
}