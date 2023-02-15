//12jUL22
//A
//A B
//A B C
//A B C D
//A B C D E
// Using ASCII values

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=65;i<=69;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf(" %c ",j);
		}
	printf("\n");
	}
	getch();
}