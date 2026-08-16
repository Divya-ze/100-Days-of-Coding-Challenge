//Write a program to calculate simple and compound interest for given principle,rate and time.
#include<stdio.h>
#include<math.h>
int main(void)
{
float p,r,t,si,ci;
printf("Enter principle:");
scanf("%f",&p);
printf("Enter rate:");
scanf("%f",&r);
printf("Enter time:");
scanf("%f",&t);
si=(p*r*t)/100;
ci=p* pow((1+r/100),t) -p;
printf("Simple interst: %.2f\n",si);
printf("Compound interest: %.2f\n",ci);
return 0;
}

