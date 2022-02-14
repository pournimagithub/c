//Find even and odd number
#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter the value for num");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
    getch();
}