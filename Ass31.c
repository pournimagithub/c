//Factorial using recursion
#include<stdio.h>
int fact(int);
int main()
{
    int num,f;
    printf("\n Enter a number:");
    scanf("%d",&num);
    f=fact(num);
    printf("\n Factorial of %d is:%d",num,f);
    return 0;
}
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return(n*fact(n-1));
}