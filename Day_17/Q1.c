//Q33: Write a program to check if a number is an Armstrong number.


#include<stdio.h>
#include<math.h>
int main(void)
{
int a,arm=0,rem,count,org,num;
printf("Enter the no:");
scanf("%d",&a);
org=a;
num=a;
count=0;
while(a>0)
{count++;
a=a/10;}
while(num>0)
{rem=num%10;
num=num/10;
arm=arm+pow(rem,count);
}
if(arm==org)
{printf("%d is Armstrong",arm);
}
else
{printf("Not Armstrong");
}
return 0;
}
