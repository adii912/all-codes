#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main ()
{
    FILE *fs;
    char name[10];
    int rollno , marks,i;
    fs=fopen("mydb.c","w");
    if(fs==NULL)
    {
        printf("File not found");
        getch();
        exit(1);
        
    }
    for(i=0;i<5;i++)
    {
        printf("Enter the name rollno marks ");
        scanf("%s%d%d",&name,&rollno,&marks);
        fprintf(fs,"\n %s\t %d \t %d",name ,rollno,marks);

    }
    fclose(fs);
    getch();
}

