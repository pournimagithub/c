//Calculate simple interest
#include<stdio.h>
#include<conio.h>
void main()
{
    int p,r,n,si;
    printf("Enter the value for p,r,n:");
    scanf("%d%d%d",&p,&r,&n);
    si=(p*r*n)/100;
    printf("Simple interest is %d",si);
    getch();
}