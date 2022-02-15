//Accept number from user & display sum of digit 
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    printf("The sum of digit is %d",sum);
    getch();
}