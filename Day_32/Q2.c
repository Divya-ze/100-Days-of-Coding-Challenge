//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/




#include <stdio.h>

int main()
{
int n, digit, i;
int freq[10] = {0};
int max = 0, result = 0;
printf("Enter a number: ");
scanf("%d", &n);
while(n > 0)
{
digit = n % 10;
freq[digit]++;
n = n / 10;
}
for(i = 0; i < 10; i++)
{
if(freq[i] > max)
{
max = freq[i];
result = i;
}
}
printf("%d", result);
return 0;
}

