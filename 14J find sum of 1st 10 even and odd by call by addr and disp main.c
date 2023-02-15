//14 Jul 22
// WP to find sum of 1st 10 even and odd numbers  using call by address and display in main

#include<stdio.h>
#include<conio.h>

void sum(int * , int * );
void sum(int * se, int * so)
{
	int i, e=0, o=0;
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
			e = e + i;
		else
			o = o + i;
	}

	*se = e;
	*so = o;
}

void main()
{
	int sume,sumo;
	sum(&sume,&sumo);

	printf("\n Sum of 1st 10 even numbers id %d", sume);
	printf("\n Sum of 1st 10 odd numbers id %d", sumo);

	getch();
}