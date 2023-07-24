#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],b[5],i,j,k;
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
    k=0;
    for(j=0;j<5;j++)
    {
        if(a[i]==b[j])
        {
            k=1;
            break;
        }
    }
    
    

  if(k==0)
  {
      printf("\n uncommon %d",a[i]);
  }
}



for(i=0;i<5;i++)
{
    k=0;
    for(j=0;j<5;j++)
    {
        if(b[i]==a[j])
        {
            k=1;
            break;
        }
    }
    
     if(k==0)
  {
      printf("\n uncommon %d",b[i]);
  } 
}

    getch();
}
