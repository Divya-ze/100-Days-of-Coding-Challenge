//Q32: Write a program to check if a number is a palindrome.



#include<stdio.h>
int main (void)
{
int a,org,rev=0,remd;
printf("Enter a number:");
scanf("%d",&a);
org=a;
while(a!=0)
{
remd=a%10;
rev=rev*10 +remd;
a=a/10;
}
if(org==rev)
{
printf("The no is palindrome");
}
else
{
printf("The no is NOT a palindrome!");
}
return 0;
}
