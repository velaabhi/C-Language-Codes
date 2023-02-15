//13Jul22
//WAP to cal Area of Circile using function, by passing value of r from main to aoCir and returning value of aoCir to main and printing in main 

#include<stdio.h>
#include<conio.h>
float aoCir(int r);			//fun Declaration- float instead of void because we are returning that data type to the main function 
	
float aoCir(int r)			//fun Defination		
{
	return (3.14*r*r);									// value of area of circle is returned to Main
}

void main()
{
	int r;
	float a;
	printf("\n Enter value of radius");			//accepting r in Main	
	scanf("%d",&r);
	
	a = aoCir(r);								//fun Call - passing r to aoCir  funtion and using a to store the value returned from aoCir
	printf("\n Area of the circle is %f",a);
	
	getch();

}