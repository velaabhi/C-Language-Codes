//18 Jul 22 -3
//Accept and display array using pointer notation

#include<stdio.h>
#include<conio.h>

void main()
{
	int i, ar[5];
	printf("\nEnter array elements");

	for(i=0;i<5;i++)
	{
		printf("\nEnter elements ");		// we used (ar+i) i.e. base pointer notation to access that array index/location 
		scanf("%d",ar+i);
	}

	printf("\nElements of the array are");
	for(i=0;i<5;i++)
	{
		printf("\t %d",*(ar+i));		// we used dereferencing i.e.*(ar+i) to access that value 
	}
	getch();

}