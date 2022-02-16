//Power of given number using for
#include<stdio.h>
#include<conio.h>
void main()
{
    float x,y,a=1;
    int i;
    printf("Enter the value of x\n");
    scanf("%f",&y);
    for(i=1;i<=y;i++)
    {
        a=a*x;
    }
    printf("The result is %f",a);
    getch();
}