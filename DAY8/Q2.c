// Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main(void)
{
int a,b,c;
printf("Enter yur nos.");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
printf("The no %d is the largest",a);
else if(b>a && b>c)
printf("The no. %d id the largest",b);
else
printf("The %d is the largest",c);
return 0;
}

