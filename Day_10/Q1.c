//WAP to classify a triangle as Equilateral , Isosceles or Scalene based on its side length.

#include<stdio.h>
int main(void)
{
int t1,t2,t3;
printf("Enter your side lengths:");
scanf("%d %d %d", &t1 ,&t2,&t3);
if (t1==t2 && t2==t3)
printf("The triangle is Equilateral");
else if(t1==t2 || t2==t3 || t3==t1 )
printf("The triangle is an Isosceles");
else
printf("The triangle is Scalene");
return 0;
}
