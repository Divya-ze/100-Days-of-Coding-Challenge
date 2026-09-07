//Q34: Write a program to check if a number is prime

#include<stdio.h>
int main(void)
{
int i,a,count=0;
printf("Enter no:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
{count++;
}}
if(count==2)
{printf("The no is Prime!");
}
else
{printf("Not Prime!");
}
return 0;
}
