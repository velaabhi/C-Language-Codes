//12Jul22
//1 2 3 4 5
//2 4 6 8 10
//
//

//10 20 30 40 50 

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d,e;
	for(a=1,b=2,c=3,d=4,e=5;								//comma sepearators for multiple initialisations
		a<=10 && b<=20 && c<=30 && d<=40 && e<=40;			//logical opeartors for multiple conditions
		a=a+1, b=b+2, c=c+3, d=d+4, e=e+5)					//comma sepearators for multiple INCREMENTS
	{
		printf("\n \t%d\t%d\t%d\t%d\t%d",a,b,c,d,e);
	}getch();
}
