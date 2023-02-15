//21 July 22 - 6
// Prog to use Command Line Arguments i.e. Arguments/Parameters passed to voidmain() function from command prompt

#include<stdio.h>
#include<conio.h>

void main(int argc, char *argv[])		//argc is argument counter which counts the number of parameters passed to the main func
{
	int i;
	printf("\nNumber of parameters passed = %d",argc);		//zeroth location of argc stores path of project 

	for(i=0;i<argc;i++)
	{
		printf("\n%s",argv[i]);		//argv is argument vector which stores full string at an index then next full string at next index and so on,
									//hence we use "%s" cz we have to access that full string stored at ith address of argv[]
	}
	getch();
}