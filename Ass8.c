//Interchange the value between three numbers without using forth variable
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter value of A,B,C:");
    scanf("%d%d%d",&a,&b,&c);
    a=a+b+c;
    b=a-b-c;
    c=a-b-c;
    a=a-b-c;
    printf("Value of A=%d,\nB=%d,\nC=%d",a,b,c);
    getch();
}