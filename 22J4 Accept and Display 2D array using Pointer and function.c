//22 July 22 - 4
// Accepting and Displaying 2D array using pointer and function
int i,j;
#include<stdio.h>
#include<conio.h>

void accept(int ar[][3]);
void accept(int ar[][3])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter %dx%d element ",i,j);
			scanf("%d",*(ar+i)+j);		//cz "*(ar+i)" is same as ar[i] i.e. we are accessing the row stored at ar[i] 
		}
	}
}

void display(int ar[][3]);
void display(int ar[][3])
{
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("\t%d",*(*(ar+i)+j));	//1 extra star cz we want to access the value stored at that address 
			}
			printf("\n");
		}
}

void main()
{
	int ar[3][3],i,j;
	printf("\nEnter Array elements for 3*3 2D array\n");
	accept(ar);

	printf("\nDisplay arraying\n");
	display(ar);
	getch();
}