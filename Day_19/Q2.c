//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include<stdio.h>
int main(void)
{
int a,rem,sum=0;
printf("Enter your no:");
scanf("%d",&a);
while(a>0)
{
rem=a%10;
sum=sum+rem;
a=a/10;
}
printf("The sum of digits is %d",sum);
return 0;
}
