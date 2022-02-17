//Passing parameter returning values
#include<stdio.h>
#include<conio.h>
int div(int,int);
void main()
{
    int a,b,ans=0;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    ans=div(a,b);
    printf("ans=%d",ans);
    getch();
}
int div(int a,int b)
{
    int c;
    c=a/b;
    return c;
}