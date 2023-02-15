//12Jul22
// WAP to exit if user enters 2 using exit function
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i=1,n;
	do
	{
		printf("Enter a number");
		scanf("%d",&n);
		if (n==2)
		exit(0);			//exit function needs header file #include<stdlib.h> 
	}while(i<=5);
	getch();
	
}