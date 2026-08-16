//Write a program to input an integer and check whether its even or odd using if else 
#include <stdio.h>
int main(void)
{
int a;
printf("Enter your no.:");
scanf("%d",&a);

if(a%2==0)
printf("the no. %d is even! ",a);
else
printf("the no. %d is odd!",a);

return 0;
}
