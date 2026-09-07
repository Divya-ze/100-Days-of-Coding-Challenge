//Q31: Write a program to take a number as input and print its equivalent binary representation.


#include<stdio.h>
int main(void)
{
int a,rem,binary=0,place=1;
printf("Enter your no.:");
scanf("%d",&a);
while(a>0)
{
rem=a%2;
binary= binary + rem*place;
place=place*10;
a=a/2;
}
printf("The binary equivalent of %d is %d",a,binary);
return 0;
}
