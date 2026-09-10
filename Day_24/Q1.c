
//Q47: Write a program to print the following pattern:

/*
Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include<stdio.h>
int main(void)
{
int i,j;
for(i=1;i<=5;i++)
{j=1;
while(j<=i)
{
printf("*");
j=j+1;
}printf("\n");
}
return 0;
}
