//Write a program to find and display the sum of first n natural nos.
#include <stdio.h>
int main(void)
{
int n,sum=0,i;
printf("Enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("Sum=%d",sum);
return 0;
}
