//Write a program to input to input two numbers and display their sum,substract,product and quotient.
#include <stdio.h>
int main(void)
{
int a,b,sum ,difference,product,quotient;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
sum=a+b;
difference=a-b;
product=a*b;
quotient=a/b;
printf("sum=%d\n",sum);
printf("difference=%d\n",difference);
printf("product=%d\n",product);
printf("quotient=%d\n",quotient);
return 0;
}
