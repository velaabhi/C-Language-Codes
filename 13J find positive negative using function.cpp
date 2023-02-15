//13Jul22
//WAP to design function to check number is Positive or negative using multiple return statements

#include<stdio.h>
#include<conio.h>
int check(int c);			//fun Declaration- 

int check(int c)
{
	if(c>0)				//even though multiple returns are used, only one value will be returned to the main funtion	
		return 1;
	else 
		return 0;
}

void main()
{
	int n,c;
	printf("Enter a number  ");
	scanf("\n%d",&n);

	c = check(n);
	if(c==1)
		printf("Entered number is Postive");
	else
		printf("Entered number is Negative");

	getch();
}