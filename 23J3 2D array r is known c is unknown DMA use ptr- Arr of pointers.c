//23 July 22 - 3
//Array of pointers- allocate 2D array mem where r is known c is unknown

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>		//we have to include Header file <stdlib.h> to use malloc() function

void main()
{
	int *p[3];			//decl array of pointers
	int i,j,c;
	printf("\nEnter how many col you want to create ");
	scanf("%d",&c);
	for(i=0;i<3;i++)		//loop for creating 3 rows ie 3 arrays of pointer addresses
	{
		p[i] = (int *)malloc(c*sizeof(int));		//1 array of pointer will have "c" nummber of elements 
		printf("\t%d",p[i]);	
	}
	
	printf("\nEnter array elements \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter value of %dx%d element ",i,j);
			scanf("%d",&p[i][j]);
		}	
	}

	printf("\nDisplay Elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",p[i][j]);
		}	
		printf("\n");
	}
	getch();		//here we dont use free() cz some part of mem is dynamically allocated i.e. nos of c and some part of mem is statically alloted ie no of rows

}
