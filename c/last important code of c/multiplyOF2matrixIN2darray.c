#include<stdio.h>
#include<conio.h>
void main ()
{
int a[3][3],b[3][3],c[3][3],i,j,mul[3][3],k;
for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("Enter first matrix ");
        scanf("%d",&a[i][j]);
    }
}

for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)   
    {
        printf("\t %d",a[i][j]);
    }
    printf("\n ");
}

for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
         printf("Enter secound matrix ");
        scanf("%d",&b[i][j]);
        
            }
}

for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
      
        printf("\t %d",b[i][j]);
    }
    printf("\n");
}    


printf(" \n answers");

printf("\n");



for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        
        mul[i][j]=0;
        for (k=0;k<3;k++)
        {
            mul[i][j]+=a[i][k]*b[k][j];
        }           
        
        }
    printf("\n");
}

for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("\t %d",mul[i][j]);
        
    }
    printf("\n");
}




    getch();
}