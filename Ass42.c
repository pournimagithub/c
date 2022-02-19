//Accept two one dimension arrays display addition of this two arrays
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[5],b[5],total[5];
    for(i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=1;i<=5;i++)
    {
        total[i]=a[i]+b[i];
        printf("Addition=%d\n",total[i]);
    }
    printf("\n\n\n\n\n---------");
    getch();
}  