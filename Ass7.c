// Interchange the value between two numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    a=10;
    b=20;
    printf("a=%d\t b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\na=%d\t b=%d",a,b);
    getch();
}