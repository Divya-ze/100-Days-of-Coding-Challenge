//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main (void)
{
float pie=3.14;
float radius,area,crf;
printf("enter radius:");
scanf("%f",&radius);
area= pie*radius*radius;
crf= 2*pie*radius;
printf("Area=%f , Circumference=%f",area,crf);
return 0;
}
