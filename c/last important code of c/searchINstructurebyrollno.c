#include<stdio.h>
#include<conio.h>
struct stud 
{
    int rno,marks;
    char name [10];
};
void main ()
{
    struct stud x[5];
    int i,r;
    for(i=0;i<5;i++)
    {
        printf("\n enter the name rno & marks ");
        scanf("%s%d%d",&x[i].name , &x[i].rno,&x[i].marks);
    }
    printf("Enter rno");
    scanf("%d",&r);
    for(i=0;i<5;i++)
    {
        if(x[i].rno==r)
        printf("\n %s \t %d \t %d",x[i].name,x[i].rno,x[i].marks);
    }

    

}