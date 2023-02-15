//23 July 22 - 4
//DMA using pointers to pointer where both r & c is unknown

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>		//we have to include Header file <stdlib.h> to use malloc() function

void main()
{
	int **p;			//decl pointer to pointer
	int i,j,r,c;
	printf("\nEnter how many rows and cols you want to create ");
	scanf("%d%d",&r,&c);

	p = (int **)malloc(r*sizeof(int*));		//DMA for row is created which stores addresses of rows at 0th col 
	for(i=0;i<r;i++)		//loop for creating r rows ie r arrays of pointer addresses
	{
		p[i] = (int *)malloc(c*sizeof(int));		//1 array of pointer will have "c" nummber of elements 
		
	}
	
	printf("\nEnter array elements \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter value of %dx%d element ",i,j);
			scanf("%d",&p[i][j]);
		}	
	}

	printf("\nDisplay Elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",p[i][j]);
		}	
		printf("\n");
	}
	free(p);
	getch();	
}
