//WAP to diaplay the month name and number of days using switch case for a given  number.

#include<stdio.h>
int main (void)
{
int month;
printf("Enter your month!");
scanf("%d",&month);
switch (month)
{
case 1:
printf("Its January,31 days!");
break;
case 2:
printf("Its February,28 days!");
break;
case 3:
printf("Its March,31 days!");
break;
case 4:
printf("Its April,30 days!");
break;
case 5:
printf("Its May,31 days!");
break;
case 6:
printf("Its June,30 days!");
break;
case 7:
printf("Its July,31 days!");
break;
case 8:
printf("Its August,31 days!");
break;
case 9:
printf("Its September,30 days!");
break;
case 10:
printf("Its October,31 days!");
break;
case 11:
printf("Its November,30 days!");
break;
case 12:
printf("Its December,31 days!");
break;
default :
printf("The no is invalid!");
}
return 0;
}
