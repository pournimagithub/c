//Reverse string without use function
#include<stdio.h>
#include<string.h>
void main()
{
    char ch[10]={"Computer"};
    int i=0,j;
    while(ch[i]!='\0')
    {
        i++;
    }
    for(j=i;j>=0;j--)
    {
        printf("%c",ch[j]);
    }
}