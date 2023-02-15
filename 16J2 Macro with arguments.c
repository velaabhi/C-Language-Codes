//16 Jul 22
// Macro with arguments

#include<stdio.h>
#include<conio.h>

#define ADD(a,b) (a+b)		//Macro defined with arguments
void main()
{
	int a,b,res;
	printf("Enter values of a,b");
	scanf("%d%d",&a,&b);

	res = ADD(a,b);			//MACRO called by passing values
	printf("Addition using macro is %d",res);
	
	getch();
}
