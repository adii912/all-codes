#include<stdio.h>
#include<conio.h>
void main()
{
float BS,HRA,DA,IT,PF,Gross,Net;
printf("Enter the basic salary");
scanf("%f",&BS);

HRA=(BS*0.4);
DA=(BS*0.2);
IT=(BS*0.1);
PF=(BS*0.08);
Gross=(BS+HRA+DA);
Net=(Gross-IT-PF);
printf("\nHRA=%f",HRA);
printf("\nDA=%f",DA);
printf("\nIT=%f",IT);
printf("\nPF=%f",PF);
printf("\nGross=%f",Gross);
printf("\nNet=%f",Net);
getch();





}