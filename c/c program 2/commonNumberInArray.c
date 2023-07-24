#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],b,c,i,j;
    for(i=0;i<5;i++)
    {
    printf("Enter the first array");
    scanf("%d",&a[i]);
    }
printf("Enter the number");
scanf("%d",&c);

b=0;
for(i=0;i<5;i++)
{
    if(a[i]==c)
    {
        b=1;
        printf("\n Found %d",a[i]);
    }
}

if(b==0)
{
    printf("\n Not found");
}

getch();
}