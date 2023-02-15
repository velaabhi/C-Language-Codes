//22 July 22 - 1
// Accepting and Displaying 2D array

#include<stdio.h>
#include<conio.h>

void main()
{
	int ar[3][3],i,j;		//declaring 2D array [row][col]
	printf("\nEnter elements for a 3x3 array \n");
	
	for(i=0;i<3;i++)		//Loop for accepting values
	{
		for(j=0;j<3;j++)
		{
			printf("Enter %dx%d element ",i,j);
			scanf("%d",&ar[i][j]);
		}
	}

	printf("\nArray Elements are\n");
	for(i=0;i<3;i++)		//Loop for displaying values
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",ar[i][j]);
		}
		printf("\n");
	}
	getch();
}