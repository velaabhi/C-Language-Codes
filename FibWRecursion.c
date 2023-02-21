#include<stdio.h>
#include<conio.h>

//Fibonacci with recursion
void Fib(n)
{
    static int n1=0,n2=1,n3;    //used static kw cz we want to remeber n1,n2 values in next recusion cycle
    if(n>0)
    {
        n3 = n1+n2;
        printf("%d, ",n3);
        n1 = n2;
        n2 = n3;
        Fib(n-1);
    }

}

void main()
{
    int n, n1=0, n2=1, n3=0;
    printf("Enter a number");
    scanf("%d",&n);

    printf("%d ,%d, ",0,1);
    Fib(n-2);       //n-2 cz we have already printed 0,1  
}