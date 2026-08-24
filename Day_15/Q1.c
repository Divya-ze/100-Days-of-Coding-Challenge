//Q29: Write a program to calculate the factorial of a number.



#include<stdio.h>
int main(void)
{
int a,i,fact=1;
printf("Enter the no for factorial!:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
fact=fact*i;
}
printf("The fact of %d is %d",a,fact);
return 0;
}

