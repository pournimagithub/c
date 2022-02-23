//Write a program to separate the individual characters from a string.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    char str[100];/*Declaresastringofsize100*/
    int i=0;
    printf("\n\nSeparate the individual characters from a string:\n");
    printf("------------------------------------------------------\n");
    printf("Input the string:");
    fgets(str,sizeof str,stdin);
    printf("The characters of the string are:\n\n");
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}    