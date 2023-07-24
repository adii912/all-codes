#include<stdio.h>
#include<conio.h>
void main()
{
int a[2],b[2],i,sum;
for(i=0;i<2;i++)
{
    printf("Enter the fisrt array");
    scanf("%d",&a[i]);
}
for(i=0;i<2;i++)
{
    printf("Enter the secound array");
    scanf("%d",&b[i]);
}
for(i=0;i<2;i++)
{
    sum=a[i]+b[i];
    printf("\n %d",sum);

}









getch();
}