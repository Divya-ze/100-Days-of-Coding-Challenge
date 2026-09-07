//Q36: Write a program to find the HCF (GCD) of two numbers.


#include<stdio.h>
int main(void)
{
int i,a,b,gcd;
printf("Enter your nos.:");
scanf("%d %d",&a,&b);
for(i=1;i<=a && i<=b ;i++)
{
if(a%i==0 && b%i==0)
{gcd=i;
}}
printf("The GCD is %d",gcd);
return 0;
}
