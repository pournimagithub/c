//Write a program to show the basic declaration of pointer
#include<stdio.h>
int main()
{
    int *ptr,q;
    q=50;
    ptr=&q;
    printf("%d",*ptr);
    return 0;
}