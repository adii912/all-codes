#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main ()
{
    FILE *fs;
    char ch;
    fs=fopen("abc.c","r");


if(fs==NULL)
 {
    printf("File not found");
    getch();
    exit(0);
 }
 while(1)
 {
    ch=fgetc(fs);
    if(ch==EOF)
    break;
    printf("%c",ch);
 }
 fclose(fs);
 getch();
}