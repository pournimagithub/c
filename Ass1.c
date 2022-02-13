//Multiplication of two numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,result;
    printf("Enter a first number\n");
    scanf("%d",&num1);
    printf("Enter a second number\n");
    scanf("%d",&num2);
    result=num1*num2;
    printf("Multiplication is %d",result);
    getch();
}