//12Jul22
// ASCII values of each character

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=0;i<=256;i++)
	{
		printf(" %d---%c",i,i);
		printf("\n");
	}
	getch();
}