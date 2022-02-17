//Passing parameter not returning values
#include<stdio.h>
#include<conio.h>
void add(int,int);
void sub(int,int);
void main()
{
    int a,b;
    printf("Enter values for a & b");
    scanf("%d%d",&a,&b);
    add(a,b);
    sub(a,b);
    getch();
} 
void add(int a,int b)
{
    int c;
    c=a+b;
    printf("add=%d",c);
}
void sub(int a,int b)
{
    int c;
    c=a-b;
    printf("sub=%d",c);
}