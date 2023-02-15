//15 Jul 22
// Write a Recursive function to cal sumof1st 10naturalnos 

#include<stdio.h>
#include<conio.h>

int fact(int);
int fact(int n)
{
	int f=0;	
	if(n == 1)
		return 1;
	else 
		f = n * fact(n-1);   //fact funtion is called within that same function
	return f;
}

void main()
{
	int n = 3,res;
	res = fact(n);
	printf("Factorial is %d",res);
	getch();
}