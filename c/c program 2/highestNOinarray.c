#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,max;
for(i=0;i<5;i++)
{
    printf("Enter the number ");
    scanf("%d",&a[i]);
}
max=0;
for(i=0;i<5;i++)
{
    if(a[i]>max)
    max=a[i];
}
printf("\n %d",max);

    getch();
}