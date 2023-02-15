//13Jul22
//WAP to design function to find sum of first 10 natural numbers and print result in main

#include<stdio.h>
#include<conio.h>
int sum();			//fun Declaration- 

int sum()
{
	int i,j=0;
	for(i=1;i<=10;i++)
	{
		j=j+i;
	}
	return j;
}


void main()
{
	int j;
	j = sum();
	printf("Sum of 1st 10 natural numbers is %d",j);
	getch();
}