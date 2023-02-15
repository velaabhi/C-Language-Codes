//12Jul22
//11 12 13 14 15
//11 12 13 14 15
//11 12 13 14 15
//11 12 13 14 15
//11 12 13 14 15
//15 14 13 12 11
//15 14 13 12 11
//15 14 13 12 11
//15 14 13 12 11
//15 14 13 12 11

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=11;j<=15;j++)
		{
			printf(" %d ",j);
		}
		printf("\n");	
	}
	printf("\n");
	for(i=1;i<=5;i++)
	{
		for(j=15;j>=11;j--)
		{
			printf(" %d ",j);
		}
		printf("\n");	
	}
	getch();
}