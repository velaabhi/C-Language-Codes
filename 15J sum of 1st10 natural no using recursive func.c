//15 Jul 22
// Write a Recursive function to cal sumof1st 10naturalnos 

#include<stdio.h>
#include<conio.h>

int sum(int);
int sum(int n)
{
	int s=0;	
	if(n == 1)
		return 1;
	else 
		s = n + sum(n-1);   //sum funtion is called within that same function
	return s;
}

void main()
{
	int n = 10,res;
	res = sum(n);
	printf("Sum of 1st 10 natural no is %d",res);
	getch();
}
