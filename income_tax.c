#include<stdio.h>
int main(){

float tax,income;
printf("Enter your income\n");
scanf("%f",&income);

if(income>=25000 && income<=50000)
{
    tax= 0.05*(income - 25000);
}
if(income>=50000   && income<=100000 )
{
    tax= 0.20*(income - 50000);
}
if(income>=100000 ){
    tax= 0.30*(income-100000);
}
printf("Your tax to be paid is %f",tax);
    return 0;
}