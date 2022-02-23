//Write a program to input a string and print it
#include<stdio.h>
#include<stdlib.h>
void main()
{
    char str[50];
    printf("\n\n Accept a string from keyboard:\n");
    printf("---------------------\n");
    printf("Input the string:");
    fgets(str,sizeof str,stdin);
    printf("The string you entered is:%s\n",str);
}