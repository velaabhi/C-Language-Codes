//16 Jul 22
// Macro within Macro or nested macro

#include<stdio.h>
#include<conio.h>

#define ADD1(a,b) (a+b)		//Macro defined with arguments
#define ADD2(a,b,c) (ADD1(a,b)+c)		// Macro nested within macro

void main()
{
	int a,b,c,res;
	printf("Enter values of a,b,c");
	scanf("%d%d%d",&a,&b,&c);

	res = ADD2(a,b,c);			//MACRO called by passing values
	printf("Addition using nested macro is %d",res);
	
	getch();
}
