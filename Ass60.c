//Write a program to find the length of a string without using library function
#include<stdio.h>
#include<stdlib.h>
void main()
{
    char str[100];
    int i=0;
    printf("\n\n Find the length of a string:\n");
    printf("---------------------\n");
    printf("Input the string:");
    fgets(str,sizeof str,stdin);
    while(str[i]!='\0')
    {
        i++;
    }
    printf("Length of the string is:%d\n\n",i-1);
}