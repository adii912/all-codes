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
int i;
for(i=0;i<5;i++)
{
    printf("Enter the name rno & marks");
    scanf("%s%d%d",&x[i].name,&x[i].rno,&x[i].marks);
}
for(i=0;i<5;i++)
{
    printf("\n %s \t %d \t %d",x[i].name,x[i].rno,x[i].marks);
}


}


