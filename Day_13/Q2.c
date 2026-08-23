//Q26: Write a program to print numbers from 1 to n.

#include<stdio.h>
int main(void)
{
int a,i;
printf("Enter your limit:");
scanf("%d",&a);
i=1;
for (i=1;i<=a;i++)
{
printf("%d",i);
}
return 0;
}
