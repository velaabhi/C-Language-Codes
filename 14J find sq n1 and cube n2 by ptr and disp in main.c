//14 Jul 22
// WP to read n1 & n2 from user and find sq of n1 and cube of n2 using pass by address and display in main

#include<stdio.h>
#include<conio.h>

void sqcu(int,  int, int*, int*);
void sqcu(int n1, int n2, int*sq, int*cu)
{
	int s,c;
	s = n1 * n1;
	c = n2 * n2 * n2;

	*sq = s;
	*cu = c;
}


void main()
{
	int n1,n2,sqr,cub;
	printf("\n Enter n1 and n2");
	scanf("%d%d",&n1,&n2);

	sqcu(n1,n2,&sqr,&cub);

	printf("\n Square of n1 is %d",sqr);
	printf("\n Cube of n2 is %d",cub);
	
	getch();
}