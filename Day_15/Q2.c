//Q30: Write a program to reverse a given number.

#include<stdio.h>
int main(void)
{
int a,reverse=0,r;
printf("Enter your no.:");
scanf("%d",&a);
while (a!=0)
{
r=a%10;
reverse= reverse*10 + r;
a=a/10;
}
printf("The reverse is %d ",reverse);
return 0;
}
