// 26 Jul 22 - 2
//DMA for Structure

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct student
{
	int roll;
	char name[10];
	float per;
}stud; 

void main()
{
	int i,n;
	stud s;
	stud * p;		//stud * cz stud is datatype
	printf("\nEnter nos of records you want to create");
	scanf("%d",&n);

	p = (stud *)malloc(n*sizeof(stud));		//DMA for struture stud is stored in array of addresses p

	printf("\nAccept data of %d students",n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter roll, Name, Percentage of %d student",i+1);
		scanf("%d%s%f",&p[i].roll,p[i].name,&p[i].per);		//using dot operator to access addresses 
	}

	printf("\nDisplaying data of %d students",n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter roll, Name, Percentage of %d student",i);
		printf("Roll = %d, Name = %s, Percent = %f ",p[i].roll,p[i].name,p[i].per);
	}
	getch();
}