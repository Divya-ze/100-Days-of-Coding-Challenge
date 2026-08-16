//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main(void)
{
int y;
printf("Enter year:");
scanf("%d",&y);
if(y%4==0 && y%100!=0)
printf("THE YEAR %d IS LEAP YEAR",y);
else if(y%400==0)
printf("THE YEAR %d IS LEAP YEAR",y);
else
printf("THE YEAR %d IS NOT A LEAP YEAR",y);
return 0;
}
