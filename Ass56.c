//Write a program of String pointer
#include<stdio.h>
const int MAX=4;
int main()
{
    char *names[]=
    {
        "Zara Ali",
        "Heena Ali",
        "Nuha Ali",
        "Sara Ali",
    };
    int i=0;
    for(i=0;i<MAX;i++)
    {
        printf("Value of names[%d]=%s\n",i,names[i]);
    }
    return 0;
}