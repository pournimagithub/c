//Write a program for a 2D array of size 3*3 and print the matrix
#include<stdio.h>
void main()
{
    int arr1[3][3],i,j;
    printf("\n\n Read a 2D array of size 3*3 and print the matrix:\n");
    printf("-----------------------\n");
    printf("Input elements in the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Element=[%d],[%d]:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n The matrix is:\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",arr1[i][j]);
    }
    printf("\n\n");
    
}