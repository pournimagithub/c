//To display factorial of given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,f,i;
    printf("Enter a number:");
    scanf("%d",&a);
    f=1;
    i=1;
    while(i<=0)
    {
        f=f*i;
        i++;
    }
    printf("Factorial:%d",f);
    getch();
}