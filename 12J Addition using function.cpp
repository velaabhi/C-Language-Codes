//13Jul22
//WAP to perform Addition using function, here only control is getting passed and we are accepting and printing values in the functionm itself

#include<stdio.h>
#include<conio.h>
void Addition();								//fun Declaration

void Addition()									//fun defination
{
	int a,b,res;
	printf("\n Enter value of a,b");			
	scanf("%d%d",&a,&b);
	res = a+b;
	printf("Additon = %d",res);
}

void main()
{
	Addition();									//fun Call
	printf("\n Data 1");
	printf("\n Data 2");
	Addition();									//fun Call
	printf("\n Data 3");
	printf("\n Data 4");
	getch();

}