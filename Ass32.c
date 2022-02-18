//To print Fibonacci series using recursion
#include<stdio.h>
#include<conio.h>
int term;
int Fibonacci(int prNo,int num);
void main()
{
    static int prNo=0,num=1;
    printf("\n\nRecursion:print Fibonacci series:\n");
    printf("----------------------\n");
    printf("Input number of terms for the series(<20):");
    scanf("%d",&term);
    printf("The series are:\n");
    printf("1");
    Fibonacci(prNo,num);
    printf("\n\n");
}
int Fibonacci(int prNo,int num)
{
    static int i=1;
    int nxtNo;
    if(i==term)
    return 0;
    else
    {
        nxtNo=prNo+num;
        prNo=num;
        num=nxtNo;
        printf("%d",nxtNo);
        i++;
        Fibonacci(prNo,num);
    }
    getch();
    return 0;
}