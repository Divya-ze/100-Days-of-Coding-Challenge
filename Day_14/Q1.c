//Q27: Write a program to print the sum of the first n odd numbers.

#include<stdio.h>
int main(void)
{
int a,i,sum=0;
printf("Enter your limit:");
scanf("%d",&a);
for(i=1;i<= 2*a -1;i+=2)
{
sum=sum+i;
}
printf("the sum of first %d odd nos. is %d",a,sum);
return 0;
}
