//12Jul22
//2 4 6 8 10
//2 4 6 8 10
//2 4 6 8 10
//2 4 6 8 10

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=2;j<=10;j=j+2)			//increment by 2
		{
			printf(" %d ",j);
		}
		printf("\n");
	}
	getch();
}