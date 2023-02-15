//23 July 22 - 1
//DMA using malloc()

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>		//we have to include Header file <stdlib.h> to use malloc() function

void main()
{
	int n,i;
	int *p;					// Pointer variable will act as a array and store values of number of addresses user want to enter
	printf("\nEnter number of values you want to store  ");
	scanf("%d",&n);

	p = (int *)malloc(n*sizeof(int));		//allocates mem dynamically i.e. it will create a mem block array of 'n' blocks whose size will be n*4
										//1D array is base pointer to an array
	printf("\nEnter array elements");
	for(i=0;i<n;i++)
	{
		printf("\nEnter value of %d element ",i);
		scanf("%d",&p[i]);
	}

	printf("\nDisplay Elements");
	for(i=0;i<n;i++)
	{
		printf("\t%d",p[i]);
	}
	free(p);					//free up the pointer p
	getch();
}