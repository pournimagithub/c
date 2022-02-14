//Display student class using && operator
#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf("Enter the marks in percentage");
    scanf("%d",&x);
    if(x>=75)
    {
        printf("in distinction");
    }
    else
    if((x>=65)&&(x<75))
    {
        printf("\n first class");
    }
    else
    if((x>=55)&&(x<65))
    {
        printf("\n second class");
    }
    else
    if((x>=35)&&(x<55))
    {
        printf("\n pass");
    }
    else
    if(x<35)
    {
        printf("\n fail");
    }
    getch();
}