//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 90-100: Grade A,80-89: Grade B ,70-79: Grade C ,60-69: Grade D ,below 60: Grade F.
#include <stdio.h>
int main(void)
{
int m;
printf("90-100: Grade A\n,80-89: Grade B\n,70-79: Grade C\n,60-69: Grade D\n,Below 60: Grade F\n");
printf("Enter your marks:");
scanf("%d",&m);
if(m>=90 && m<=100)
printf("Grade Assigned:A");
else if(m>=80 && m<=89)
printf("Grade Assigned:B");
else if(m>=70 && m<=79)
printf("Grade Assigned:C");
else if(m>=60 && m<=69)
printf("Grade Assigned:D");
else
printf("Grade Assigned:F");
return 0;
}


