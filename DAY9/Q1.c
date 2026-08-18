//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include<stdio.h>
#include<math.h>
int main(void)
{
float a,b,c,d,rt,rt1,rt2;
printf("Enter your conds.:");
scanf("%f %f %f",&a,&b,&c);
d=(b*b-4*a*c);
if (d>0)
{
rt1=(-b+sqrt(d)/2*a);
rt2=(-b -sqrt(d)/2*a);
printf("The roots are real and distinct\n");
printf("The roots are %2f %2f\n",rt1,rt2);
}
else if(d==0)
{
rt=rt1=rt2=(-b/2*a);
printf("The roots are equal\n");
printf("The roots are %2f\n",rt);
}
else
printf("The roots are imaginary and complex");
return 0;
}
