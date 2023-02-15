//15 Jul 22
// Usage of Static function

#include<stdio.h>
#include<conio.h>

int show();
int show()
{
	static int count;		//using static function
	count++;
	return count;
}

void main()
{
	int res;
	res = show();
	res = show();
	res = show();
	res = show();
	res = show();
	res = show();
	printf("res is %d",res);
	getch();
}