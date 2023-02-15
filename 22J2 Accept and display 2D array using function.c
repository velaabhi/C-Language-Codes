//22 July 22 - 2
// Accepting and Displaying 2D array using function

#include<stdio.h>
#include<conio.h>
int i,j;					//Globally declaring i,j 
void accept(int ar[][3]);	//void cz we dont have to return any value 
							//and int ar[][3], that 3 cz we must mention Col size during declaration
void accept(int ar[][3])
{
	for(i=0;i<3;i++)		//Loop for accepting values
	{
		for(j=0;j<3;j++)
		{
			printf("Enter %dx%d element ",i,j);
			scanf("%d",&ar[i][j]);
		}
	}
}

void display(int [][3]);
void display(int ar[][3])
{
	for(i=0;i<3;i++)		//Loop for displaying values
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",ar[i][j]);
		}
		printf("\n");
	}
}
void main()
{
	int ar[3][3];		//declaring 2D array [row][col]
	printf("\nEnter elements for a 3x3 array \n");
	accept(ar);			//calling accept function
	
	printf("\nArray Elements are\n");
	display(ar);		//calling display function
	getch();
}