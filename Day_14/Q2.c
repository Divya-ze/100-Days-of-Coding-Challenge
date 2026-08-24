//Q28: Write a program to print the product of even numbers from 1 to n.


#include<stdio.h>
int main(void)
{
int a,i,prd=1;
printf("Enter your limit!:");
scanf("%d",&a);
for(i=2;i<=a;i+=2)
{
prd=prd*i;
printf("%d",i);
if (i<a)
{ printf("*");
}
}
printf("\n the prd is =%d",prd);
return 0;
}
