//20 July 22-6
//Find string length by using own funtion by char by char 

#include<stdio.h>
#include<conio.h>

int stringLen(char []);		//function declaration - has int type cz we have to return value of len- has [] to denote array
int stringLen(char str[])
{
	int len=0,i=0;		//len is a count variable hence initialised to zero and i is iterative variable
	while(str[i]!='\0')
	{
		len++;
		i++;
	}
	return len;
}


void main()
{
	char str[15];
	int len;

	printf("\nEnter string ");
	gets(str);		//string is scanned

	len = stringLen(str);		//functoin stringLen is called passed value of str,
								//len is used to stroe value returned from stringLen functon
	printf("\n Length of the string is %d",len);
	getch();

}