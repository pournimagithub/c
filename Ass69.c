//Convert uppercase to lowercase without using string function 
#include<stdio.h>
#include<string.h>
void main()
{
    char ch[10];
    int i=0;
    printf("\n Enter the string");
    printf("%d",&ch);
    while(ch[i]!='\0')
    {
        if(ch[i]>=65 && ch[i]<=95)
        {
            ch[i]=ch[i]+32;
            printf("%c",ch[i]);
        }
        else
        {
            ch[i]=ch[i]-32;
            printf("%c",ch[i]);
        }
        i++;
    }
}