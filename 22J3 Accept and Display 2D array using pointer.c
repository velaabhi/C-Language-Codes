//22 July 22 - 3
// Accepting and Displaying 2D array using pointer

#include<stdio.h>
#include<conio.h>

void main()
{
	int ar[3][3],i,j;
	printf("\nEnter Array elements for 3*3 2D array\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter %dx%d element ",i,j);
			scanf("%d",*(ar+i)+j);		//cz "*(ar+i)" is same as ar[i] i.e. we are accessing the row stored at ar[i] 
		}
	}

	printf("\nDisplay arraying\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",*(*(ar+i)+j));	//1 extra star cz we want to access the value stored at that address 
		}
		printf("\n");
	}
	getch();
}