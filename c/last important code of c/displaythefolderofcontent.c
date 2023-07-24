#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main ()
{
    FILE *fs;
    char name[10];
    int rno,marks;
    fs=fopen("mydb.c","r");
    while(fscanf(fs,"%s%d%d",&name,&rno,&marks)!=EOF);
    {
        printf("\n %s \t %d \t %d",name,rno,marks);

    }
    fclose(fs);
    getch();

}