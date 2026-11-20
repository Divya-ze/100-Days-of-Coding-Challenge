//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/



#include <stdio.h>

int main()
{
int n, i;
printf("Enter size: ");
scanf("%d", &n);
int arr[n];
printf("Enter elements: ");
for(i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}
int max = arr[0];
int second = arr[0];
for(i = 1; i < n; i++)
{
if(arr[i] > max)
{
second = max;
max = arr[i];
}
else if(arr[i] > second && arr[i] != max)
{
second = arr[i];
}}
printf("%d", second);
return 0;
}

