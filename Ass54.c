//Write a program to swap elements using call by reference
#include<stdio.h>
int main()
{
    int num1=5;num2=10;
    printf("Number1=%d\n",num1);
    printf("Number2=%d",num2);
    Swap(&num1,&num2);
    return 0;
}
void Swap(int*n1,int*n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
    printf("Number1=%d\n",n1);
    printf("Number2=%d",n2);
    getch();
}