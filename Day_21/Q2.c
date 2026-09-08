//Q42: Write a program to check if a number is a perfect number.

#include<stdio.h>
int main(void)
{
int a,i,sum=0;
printf("Enter no :");
scanf("%d",&a);
for(i=1;i<a;i++)
{
if(a%i==0)
{
sum=sum+i;
}
}
if(sum==a)
{
printf("The no is a perfect number");
}
else
{
printf("Not a perfect number");
}

return 0;
}

