#include<stdio.h>
#include<conio.h>
void main ()
{
int a[3][3],i,j,sum;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("Enter the number ");
        scanf("%d",&a[i][j]);
    }
}

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf(" \t %d",a[i][j]);
        
    }
    printf("\n");
}
sum=0;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        sum=sum+a[i][j];
    
    }
}    
    printf("%d",sum);




    getch();
}