//Q23: Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.


#include<stdio.h>
int main(void)
{
int d,fine;
printf("Enter of no of day late:");
scanf("%d",&d);
if (d<=5)
{
fine= d*2;
printf("Your fine of %d days is %d rupees",d,fine);
}
if(d>5 && d<10)
{
fine= 10+(d-5)*4;
printf("Your fine of %d days is %d rupees",d,fine);
}
if(d>10 && d<30)
{
fine=30+(d-10)*6;
printf("Your fine of %d days is %d rupees",d,fine);
}
if(d>30)
printf("Membership Cancelled!");
return 0;
}
