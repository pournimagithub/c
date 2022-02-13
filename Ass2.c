//Display months and days
#include<stdio.h>
#include<conio.h>
void main()
{
    int months,days;
    printf("Enter days\n");
    scanf("%d",&days);
    months=days/30;
    days=days%30;
    printf("months=%d\t days=%d",months,days);
    getch();
}