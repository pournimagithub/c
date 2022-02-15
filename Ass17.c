//Sum of 1 to 10 number 
#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,sum=0;
    while(i<=10)
    {
        printf("%d\n",i);
        sum=sum+i;
        i++;
    }
    printf("Sum=%d\n",sum);
    getch();
}