#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,sum=0;
for(i=0;i<=5;i++)
{
    printf("Enter the number");
    scanf("%d",&a[i]);
}
sum=0;
for(i=0;i<=5;i++)
{
    sum =sum+a[i];
}

   printf("\n %d",a[i]);

    getch();
}