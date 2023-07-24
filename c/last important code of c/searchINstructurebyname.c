#include<stdio.h>
#include<conio.h>
#include<string.h>

struct stud
{
    int rollno ,marks;
    char name[10];

};
void main()
{
    struct stud x[5];
    int i;
    char r[10];

    for(i=0;i<5;i++)
    {
        printf("\n Enter the name rollno and marks ");
        scanf("%s%d%d",&x[i].name,&x[i].rollno,&x[i].marks);
    }
    printf("enter name ");
    scanf("%s",&r);

    for(i=0;i<5;i++)
    {
        if (strcmp(x[i].name,r)==0)
        printf("\n %s\t%d\t%d",x[i].name,x[i].rollno,x[i].marks);

    }    
    

    
    
    
    

getch();
    
}