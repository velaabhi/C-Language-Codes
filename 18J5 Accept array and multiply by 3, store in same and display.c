//18 Jul 22 -5
//Accept 5 nos in array, multiply each element by 3 & store result in same array, display resultant array 

#include<stdio.h>
#include<conio.h>

void accept(int []);			// we can also use  void accept (int*); bz *i.e. pointer and ar i.e. array name point to same memory location
void mul(int []);
void display(int []);

int i;						// declaring i variable globally
		
void accept(int ar[])		// we dont have to return any val hence datatype is void
{
	printf("\nEnter 5 array elements");
	for(i=0;i<5;i++)
	{
		printf("\nEnter Element ");
		scanf("%d",ar+i);		//(ar+i) can be alternatively written as "&ar[i]" 
	}

	printf("\nArray elements are ");
	display(ar);			// calling display functoin within accept function
}

void mul(int ar[])
{
	for(i=0;i<5;i++)
	{
		ar[i] = ar[i] * 3;		// ar[i] indicates value stored at (ar+i) location and we accessing that to particular index of ar...
	}
	
	printf("\nArray elements after multiplication are ");
	display(ar);
}

void display(int ar[])
{
	for(i=0;i<5;i++)
	{
		printf("\t %d", *(ar+i));		//*(ar+i) can be replaced by "ar[i]"
	}
}

void main()
{
	int ar[5];
	accept(ar);
	mul(ar);
	
	getch();
}