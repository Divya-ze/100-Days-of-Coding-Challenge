//Wrute a program to swap two numbers using a third variable
#include <stdio.h>
int main(void)
{
int a,b,c;
printf("Enter the two nums:");
scanf("%d %d",&a,&b);
c=b;
b=a;
printf("The swaped nos. are:%d and %d",c,b);
return 0;
}
