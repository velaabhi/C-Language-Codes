//18 Jul 22 -3
//Accept and display array using pointer notation and function

#include<stdio.h>
#include<conio.h>

void accept(int []);			// we can also use  void accept (int*); bz *i.e. pointer and ar i.e. array name point to same memory location
void display(int []);

int i;						// declaring i variable globally
		
void accept(int ar[])		// we dont have to return any val hence datatype is void
{
	
	printf("\nEnter array elements");

	for(i=0;i<5;i++)
	{
		printf("\nEnter elements ");		// we used (ar+i) i.e. base pointer notation to access that array index/location 
		scanf("%d",ar+i);
	}
}

void display(int ar[])
{
	printf("\nElements of the array are");
	for(i=0;i<5;i++)
	{
		printf("\t %d",*(ar+i));		// we used dereferencing i.e.*(ar+i) to access that value 
	}


}

void main()
{
	int ar[5];
	accept(ar);
	display(ar);
	getch();

}