//13Jul22
//WAP to cal SI using function, by passing values of pnr from main to SI and returning value of simple interest to main and printing in main 

#include<stdio.h>
#include<conio.h>
float SInt(float p, float n, float r);			//fun Declaration
	
float SInt(float p, float n, float r)			//fun Defination		
{
	float SI;
	SI= (p*n*r)/100;							// value is calculated
	return SI;									// value of SI is returned to Main
}

void main()
{
	float p,n,r,SI;								
	printf("\n Enter value of p,n,r");			//accepting p,n,r in Main	
	scanf("%f%f%f",&p,&n,&r);
	
	SI = SInt(p,n,r);							//fun Call - passing p,n,r to the SInt funtion and using SI to store the value returned from SInt
	printf("\n Simple Interest is %f",SI);
	
	getch();

}