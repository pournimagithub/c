//Program for select choice using switch
#include<stdio.h>
#include<conio.h>
void main()
{
    int number;
    printf("Enter any number:");
    scanf("%d",&number);
    switch(number)
    {
        case 1:puts("You entered 1\n");
        break;
        case 2:puts("You entered 2\n");
        break;
        case 3:puts("You entered 3\n");
        break;
        case 4:puts("You entered 4\n");
        break;
        default:puts("Out of range\n");
    }
    getch();
}