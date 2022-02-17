//Not passing parameter not returning value
#include<stdio.h>
#include<conio.h>
void ind();
void add();
void msg();
void main()
{
    ind();
    add();
    msg();
    getch();
}
void ind()
{
    printf("This is India\n");
    msg();
}
void add()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);
}
void msg()
{
    printf("This is message");
}