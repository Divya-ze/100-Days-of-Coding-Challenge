//Write a program to input an integer and check whether it is a positive,negative or zero using nested if-else:
#include <stdio.h>
int main(void)
{
int a;
printf("Enter your no.:");
scanf("%d",&a);
if(a>0)
printf("The no %d is positive",a);
else if(a<0)
printf("The no %d is negative",a);
else
printf("%d is equal to 0",a);
return 0;
}
