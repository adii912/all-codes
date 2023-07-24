#include<stdio.h> 
#include<conio.h>
struct stud
{
    int rno,marks;
    char name [10];

};
void main ()
{
struct stud x;

printf("Enter the name rno & marks");
scanf("%s%d%d",&x.name,&x.rno,&x.marks);
printf("\n %s \t %d \t %d",x.name,x.rno,x.marks);
getch();



}