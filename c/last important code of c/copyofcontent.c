#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void main ()
{
    FILE *fs,*fd;
    char ch;
    fs=fopen("psp.c","r");
    if(fs==NULL)
    {
        printf("File not found");
        getch();
        exit(0);

    }
    fd=fopen("psp1.c","w");
    while(1)
    {
        ch=fgetc(fs);
        if(ch==EOF)
        break;
        printf("%c",ch);
        fputc(ch,fd);
    }
fclose(fs);
fclose(fd);
getch();



}


