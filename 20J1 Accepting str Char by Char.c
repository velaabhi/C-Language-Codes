//20 July 22-1
//Accepting String using Character by Character

#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	char str[10];		// declaration of array of character i.e.string
	printf("\nEnter your name ");
	for(i=0;i<10;i++)		//loop for accepting char by char
	{
		
		fflush(stdin);	//fflush is used TO remove the enter key which would be stored in the array
							// for input A enter B enter C enter D enter E enter
							//output was A enter B enter C enter D enter E enter
							//but after using fflush for input A enter B enter C enter D enter E enter
							//output is ABCDE								
		scanf("%c",&str[i]);

	}

	str[10] = '\0';
	printf("\nDisplay your Name ");
	for(i=0;i<10;i++)		//loop for displaying char by char
	{
		printf("%c",str[i]);
	}
	getch();
}