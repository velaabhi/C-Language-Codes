//18 Jul 22 - 2
// to accept values and stores, display them using array and Function

#include<stdio.h>
#include<conio.h>

void accept(int []);		//func declaring with array hence has '[]' 
void display(int []);

void accept(int ar[])
{
	int i;
	printf("\nEnter elements of array");

	for(i=0;i<5;i++)			// for loop for accepting values from the user
								//i goes from 0 to 4 cz array indx starts from 0 and 5th element is at 4th index
	{
		printf("\nEnter element ");
		scanf("%d",&ar[i]);
	}

}

void display(int ar[])
{
	int i;
	printf("\nDisplaying array elements");		//for loop for displaying values
	for(i=0;i<5;i++)
	{
		printf(" \t %d",ar[i]);
	}

}
void main()
{
	int ar[5];
	accept(ar);		// calling accept function by passing ar array 
	display(ar);	// calling display function by passing ar array 
	
	getch();
}