#include<stdio.h>
#include<conio.h>
void swap (int *l , int *m )
{
    int z;
    z=*l;
    *l=*m;
    *m=z;

}
void main ()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("\n a=%d \n b=%d",a,b);
    getch();
}