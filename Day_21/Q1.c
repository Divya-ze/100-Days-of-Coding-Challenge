//Q41: Write a program to swap the first and last digit of a number.

#include<stdio.h>
int main(void)
{
int a,last,middle,first,div=1,num,tmp;
printf("Enter a no. :");
scanf("%d",&a);
last=a%10;
tmp=a;
while(tmp>=10)
{
tmp=tmp/10;
div=div*10;
}
first=tmp;
middle=(a%div)/10;
num= (last*div) +(middle*10)+ first;
printf("The no is %d",num);
return 0;
}
