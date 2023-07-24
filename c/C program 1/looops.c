#include<stdio.h>
int main ()
{
    int a,i,r=0;
    printf("Enter the number ");
    scanf("%d",&a);
    r=0;
    while(a>0)
    {
        i=a%10;
       if (i%2==0)
        r=i+r;
        a=a/10;

    }
    printf(" result = %d",r);
return 0;
}
