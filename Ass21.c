//Program for Armstrong number
#include<stdio.h>
#include<conio.h>
void main()
{
    int number,originalnumber,remainder,result=0;
    printf("Enter a three digit integer:");
    scanf("%d",&number);
    originalnumber=number;
    while(originalnumber!=0)
    {
        remainder=originalnumber%10;
        result+=remainder*remainder*remainder;
        originalnumber/=10;
    }
    if(result==number)
    printf("%d is an Armstrong number.",number);
    else
    printf("%d is not an Armstrong number.",number);
    getch();
}