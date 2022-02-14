//To print number of days in month
#include<stdio.h>
#include<conio.h>
int main()
{
    int month;
    printf("Enter the month number 1 to 12(Consider 1=January and 12=December):");
    scanf("%d",&month);
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        printf("\n 31 days in this month");
    }
    else if(month==4 || month==6 || month==9 || month==11)
    {
        printf("\n 30 days in this month");
    }
    else if(month==2)
    {
        printf("\n Either 28 or 29 days in this month");
    }
    else
    printf("\n Please enter valid number between 1 to 12");
    return 0;
}