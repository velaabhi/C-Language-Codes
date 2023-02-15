//12jUL22
//A
//A B
//A B C
//A B C D
//A B C D E
// USING CHARACTER


#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i='A';i<='Z';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf(" %c ",j);
		}
	printf("\n");
	}
	getch();
}