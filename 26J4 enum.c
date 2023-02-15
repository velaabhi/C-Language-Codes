// 26 Jul 22 - 4
//enum to check whether no is even or odd

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

enum {False,True};		//small caps "flase" & "true" cannot be used cz they are 
						//predefined c identifiers
int check (int n);
int check (int n)
{
	if(n%2==0)
		return True;
	else
		return False;
}

void main()
{
	int n,res;

	printf ("Enter any number you want to check");
	scanf ("%d",&n);

	res = check(n);

	if(res==True)
		printf("\nNumber is Even");
	else
		printf("\nNumber is Odd");

	getch();
}