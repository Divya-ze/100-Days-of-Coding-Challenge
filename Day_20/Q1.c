//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include<stdio.h>
int main(void)
{
int a,rem,prd=1;
printf("Enter your no.:");
scanf("%d",&a);
while(a>0)
{
rem=a%10;
if(a%2 != 0)
{prd=prd*rem;
}
a=a/10;
}
printf("The prd of odd digits is %d",prd);
return 0;
}
