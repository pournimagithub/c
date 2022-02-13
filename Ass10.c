//Find greatest number between two numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter the value for a,b");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("a is greater than b");
    }
    else
    {
        printf("b is greater than a");
    }
    getch();
}