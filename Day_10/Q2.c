//WAP to display the day of the week based on a number(1-7) using switch case.

#include<stdio.h>
int main (void)
{
int day;
printf("Enter you day code:");
scanf("%d",&day);
switch(day)
{
case 1:
printf("IT IS MONDAY!!");
break;
case 2:
printf("IT IS TUESDAY!");
break;
case 3:
printf("IT IS WEDNESDAY!");
break;
case 4:
printf("IT IS THURSDAY!");
break;
case 5:
printf("IT IS FRIDAY!");
break;
case 6:
printf("IT IS SATURDAY!");
break;
case 7:
printf("IT IS SUNDAY!");
break;
default:
printf("INVALID DAY NUMBER");
}
return 0;
}
