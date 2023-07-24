#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
for(i=0;i<5;i++)
{
    printf("Enter the number");
    scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
    printf("\n %d",a[i]);
}

    getch();
}