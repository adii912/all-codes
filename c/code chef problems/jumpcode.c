#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main ()
{
    int i , count=0;
    int array[5]={2,3,1,1,4};
    count++;
    for(i=1;i<5;i=i+array[i]){
        count++;
        if(i==(5-1)){
            break;
        }
    }
    printf("minimum jump:%d",count);
}