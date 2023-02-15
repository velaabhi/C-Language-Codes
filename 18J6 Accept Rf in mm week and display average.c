//18 Jul 22 -6
//Accept rainfall in mm over a period of 1 week & display average 
#include<stdio.h>
#include<conio.h>

void accept(int []);			// we can also use  void accept (int*); bz *i.e. pointer and ar i.e. array name point to same memory location
void avg(int []);
void display(int []);

int i;						// declaring i variable globally
		
void accept(int ar[])		// we dont have to return any val hence datatype is void
{
	printf("\nEnter rainfall in mm for a week");
	for(i=0;i<7;i++)
	{
		printf("\nEnter Element ");
		scanf("%d",ar+i);		//(ar+i) can be alternatively written as "&ar[i]" 
	}

	printf("\nDaily rainfall in a week is  ");
	display(ar);			// calling display functoin within accept function
}

void avg(int ar[])
{
	int sum[7] = {0,0,0,0,0,0,0};
	float average;
	for(i=0;i<7;i++)
	{
		sum[0] = sum[0] + ar[i] ;		// ar[i] indicates value stored at (ar+i) location and we accessing that to particular index of ar...
	}
	
	average = sum[0] / 7;
	printf("\nAverage value is %f",average);
	
}

void display(int ar[])
{
	for(i=0;i<7;i++)
	{
		printf("\t %d", *(ar+i));		//*(ar+i) can be replaced by "ar[i]"
	}
}

void main()
{
	int ar[7];
	accept(ar);
	avg(ar);
	getch();
}