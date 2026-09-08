//Q43: Write a program to check if a number is a strong number.


#include<stdio.h>
int main(void)
{
int i,a,org,rem,fact,sum=0;
printf("Enter no:");
scanf("%d",&a);
org=a;
while(a>0)
{
rem=a%10;
fact=1;
for(i=1;i<=rem;i++)
{
fact=fact*i;
}
sum=sum+fact;
a=a/10;
}
if(sum==org)
{
printf("Strong Number");
}
else
{
printf("Not a strong number");
}
return 0;
}
