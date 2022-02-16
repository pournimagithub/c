//Program for sum of 1 to 10 number using do-while
#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<=n);
    printf("%d\n",sum);
    getch();
}