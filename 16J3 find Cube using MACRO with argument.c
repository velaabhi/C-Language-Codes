//16 Jul 22
// Macro with arguments to calculate Cube

#include<stdio.h>
#include<conio.h>

#define CUBE(a) (a*a*a)		//Macro defined with arguments
void main()
{
	int a,res;
	printf("Enter value of a");
	scanf("%d",&a);

	res = CUBE(a);			//MACRO called by passing values
	printf("CUBE of a using macro is %d",res);
	
	getch();
}
