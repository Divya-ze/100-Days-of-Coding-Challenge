//Q51: Write a program to print the following pattern:


/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/

#include<stdio.h>
int main (void)
{
int i,j;
for(i=5;i>=1;i--)
{
for(j=i;j>1;j--)
{
printf(" ");
}
j=i;
while(j<=5)
{
printf("%d",j);
j=j+1;
}
printf("\n");
}
return 0;
}
