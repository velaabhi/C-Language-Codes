#include<stdio.h>
#include<conio.h>
// Fibonacci without recursion
void main()
{
    int n, n1=0, n2=1, n3=0;
    printf("Enter a number");
    scanf("%d",&n);

    printf("%d ,%d, ",n1,n2);

    for(int i=2;i<n;i++)
    {
        n3 = n1+n2;
        printf("%d, ",n3);
        n1 = n2;            //updated values of n1 and n2
        n2 = n3;
    }

}