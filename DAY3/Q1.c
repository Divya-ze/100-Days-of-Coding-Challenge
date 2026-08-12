//Write a program to convert temperature from celcius to Fahreheit
#include <stdio.h>
int main(void)
{
float temp,f;
printf("Enter your temp:");
scanf("%f",&temp);
f=(9/5 *temp)+32;
printf("Your temp in fahrenheit is %f",f);
return 0;
}
