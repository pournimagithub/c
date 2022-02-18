//Example of static variable
#include<stdio.h>
#include<conio.h>
int main()
{
    printf("%d",func());
    printf("\n%d",func());
    return 0;
}
int func()
{
    static int count=0;
    count++;
    getch();
    return count;
}