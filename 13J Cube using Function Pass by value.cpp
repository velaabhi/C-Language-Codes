//13Jul22
//WAP to cal Cube using function, by passing value and printing in  main 

#include<stdio.h>
#include<conio.h>
int Cub(int x);			//fun Declaration- int instead of void because we are returning that data type to the main function 
	
int Cub(int x)			//fun Defination		
{
	return (x*x*x);		// using different variable has no effect bz memory is already allocated for that datatype and processes happen on value
}

void main()
{
	int n,c;
	printf("\n Enter any number ");			//accepting n in Main	
	scanf("%d",&n);
	
	c = Cub(n);								//fun Call - passing n to Cub  funtion and using c to store the value returned from Cub
	printf("\n Cube of the number is %d",c);
	
	getch();

}