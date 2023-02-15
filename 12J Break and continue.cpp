//12Jul22
//Break and continue 
//display only 1 2 3 4 6  from 1 to 10

#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==5)
			continue;      // continue will skip 5
		else if(i==7)
			break;			//break at 7  and stop further execution
		else
			printf(" %d ",i);
	}
	getch();
}