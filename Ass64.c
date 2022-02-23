//copy one string to another
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char ch[10]={“Alphabet”};
    char ch1[10];
    printf("ch=%s”,ch);
    strcpy(ch1,ch);
    printf("\n ch1=%s",ch1);
    getch();
}