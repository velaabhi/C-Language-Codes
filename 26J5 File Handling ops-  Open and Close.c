// 26 Jul 22 - 5
//File Handling - fopen and fclose with w mode
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	FILE * f;		
	f = fopen("My first file.txt","w");		//to Create new file in same project 
	fclose(f);

	f = fopen("E:\My first file.xls","w");	//to create new file at different location
	fclose(f);

	getch();
}