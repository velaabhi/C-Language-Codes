//22 July 22 - 5
// Adding 2 matrices and  Displaying in 3rd matrix

#include<stdio.h>
#include<conio.h>

int i=0,j=0;				//global variables

void accept(int a[][3]);							//function to accept matrix, we will call it 2 times to accept A & B matrix
void display (int c[][3]);							//declaration is must before calling  any function
void add(int[][3],int[][3],int c[3][3]);			//Addition Function 


void accept(int a[][3])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter %dx%d element ",i,j);
			scanf("%d",&a[i][j]);		
		}
	}
}

void add(int a[][3],int b[][3], int c[3][3])
{
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\nDisplay addition\n");
	display(c);
}


void display (int c[][3])
{
for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("\t%d",*(*(c+i)+j));	
			}
			printf("\n");
		}
}

void main()
{
	int a[3][3],b[3][3],c[3][3];
	printf("\nEnter Array elements for 1st array A\n");
	accept(a);												//call accept function to accept matrix A
	printf("\nEnter Array elements for 2nd array B\n");
	accept(b);												//call accept function to accept matrix B
	
	add(a,b,c);									//call addition fun by passing matrices A & B	
						
	
	getch();
}