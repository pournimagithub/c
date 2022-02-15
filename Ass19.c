//To read an integer & display each of digit of the word in English
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rev=0;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num==0)
    {
        printf("Zero");
    }
    while(num>0)
    {
        rev=(rev*10)+(num%10);
        num=num/10;
    }
    while(rev>0)
    {
        switch(rev%10)
        {
            case 1:printf("one");
            break;
            case 2:printf("two");
            break;
            case 3:printf("three");
            break;
            case 4:printf("four");
            break;
            case 5:printf("five");
            break;
            case 6:printf("six");
            break;
            case 7:printf("seven");
            break;
            case 8:printf("eight");
            break;
            case 9:printf("nine");
            break;
            case 0:printf("zero");
            break;
        }
        rev=rev/10;
    }
    getch();
}