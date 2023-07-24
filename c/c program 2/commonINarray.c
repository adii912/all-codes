#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],b[5],i,j;
    for(i=0;i<5;i++)
    {
    printf("Enter the first array");
    scanf("%d",&a[i]);
    }

for(i=0;i<5;i++)
{
    printf("Enter the secound array");
    scanf("%d",&b[i]);
}
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        if(a[i]==b[j])
        printf("\n %d",a[i]);
    }
}





    getch();
}


