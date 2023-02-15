//16 Jul 22
// Macro with pass by arguments to calculate SI

#include<stdio.h>
#include<conio.h>

#define SI(p,n,r) (p*n*r/100)		//Macro defined with arguments
void main()
{
	float p,n,r,res;
	printf("Enter values of p,n,r");
	scanf("%f%f%f",&p,&n,&r);

	res = SI(p,n,r);			//MACRO called by passing values
	printf("Simple Interest using macro is %f",res);
	
	getch();
}
