//13Jul22
//WAP to cal SI using function, here only control is getting passed and we are accepting and printing values in the functionm itself

#include<stdio.h>
#include<conio.h>
void SInt();								//fun Declaration

void SInt()					
{
	float p,n,r,SI;
	printf("\n Enter value of p,n,r");		//fun Defination
	scanf("%f%f%f",&p,&n,&r);
	SI= (p*n*r)/100;
	printf("Simple Interest = %f",SI);
}

void main()
{
	SInt();									//fun Call
	printf("\n Data 1");
	printf("\n Data 2");
	SInt();									//fun Call
	printf("\n Data 3");
	printf("\n Data 4");
	getch();

}