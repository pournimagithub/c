//Write a program in C to sort elements of array in ascending order
#include<stdio.h>
#include<conio.h>
void main()
{
    int array[5]={25,17,31,13,2};;
    int i,j,temp;
    for(i=0;i<=4;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n\n\n");
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=3;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("\n\n Array after sorting:\n");
    for(i=0;i<=4;i++)
    {
        printf("%d\t",array[i]);
    }
    getch();
}