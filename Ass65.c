//compare two string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char ch[10]={“Alphabet”};
    char ch1[10]={“Alphabet”};
    int i;
    i=strcmp(ch1,ch);
    printf("\n%d”,i);
    getch();
}
