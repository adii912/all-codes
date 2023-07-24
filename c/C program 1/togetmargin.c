#include<stdio.h>
#include<conio.h>
void main () 
{
long int Q,R,Amount,discount,net;
printf("enter the value of quantity");
scanf("%ld",&Q);
printf("Enter the value of rate");
scanf("%d",&R);
Amount=(Q*R);
discount=(Amount*0.2);
net=(Amount-discount);
printf("\nAmount=%ld",Amount);
printf("\ndiscount=%ld",discount);
printf("\nnet=%ld",net);
getch();




}