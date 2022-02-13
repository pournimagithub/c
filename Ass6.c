//Student data display
#include<stdio.h>
#include<conio.h>
void main()
{
    int rollno,id;
    float per;
    char name[10],add[10];
    printf("Enter student data\n");
    scanf("%s%s%d%d%f",&name,&add,&rollno,&id,&per);
    printf("name=%s\n address=%s\n roll no=%d\n id=%d\n percentage=%f",name,add,rollno,id,per);
    getch();
}