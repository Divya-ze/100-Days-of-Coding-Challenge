//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit

#include<stdio.h>
int main (void)
{
int unit,rate;
printf("your units consumed :");
scanf("%d",&unit);
if(unit<=100)
{
rate= (unit*5);
printf("Your bill for %d units is %d rupees  ",unit , rate);
}
if(unit>100 && unit<=200)
{
rate=(500+(unit -100)*7);
printf("Your bill for %d units is %d rupees",unit,rate);
}
if(unit>200 && unit<=300)
{
rate=(1200+(unit-200)*10);
printf("Your bill for %d units is %d rupees",unit,rate);
}
if(unit>300)
{
rate=(2200+(unit -300)*12);
printf("Your bill for %d units is %d rupees",unit,rate);
}
return 0;
}
