//Sum in arrays
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,no[5],sum=0;
    for(i=1;i<=5;i++)
    {
        scanf("%d",&no[i]);
    }
    for(i=1;i<=5;i++)
    {
        sum=sum+no[i];
    }
    printf("sum=%d\n",sum);
    getch();
}