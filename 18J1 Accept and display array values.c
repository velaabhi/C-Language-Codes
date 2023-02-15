//18 Jul 22
// to accept values and stores, display them using array

#include<stdio.h>
#include<conio.h>

void main()
{
	int i, ar[5];
	printf("\nEnter elements of array");

	for(i=0;i<5;i++)			// for loop for accepting values from the user
								//i goes from 0 to 4 cz array indx starts from 0 and 5th element is at 4th index
	{
		printf("\nEnter element");
		scanf("%d",&ar[i]);
	}

	printf("Displaying array elements");		//for loop for displaying values
	for(i=0;i<5;i++)
	{
		printf(" \t %d",ar[i]);
	}

	getch();
}