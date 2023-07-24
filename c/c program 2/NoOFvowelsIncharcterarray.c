#include<stdio.h>
#include<conio.h>
void main ()
{
char a[10];
int i,j;
printf("Enter the name ");
gets(a);

j=0;
for(i=0;a[i]!='\0';i++)
{
    if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'  )
    {
        printf("%c",a[i]);
        j++;
    }
}
printf("\n no of vowels %d" ,j);






    getch();
}