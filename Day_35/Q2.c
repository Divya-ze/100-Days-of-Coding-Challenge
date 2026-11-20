//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/


#include <stdio.h>

int main()
{
int n, k;
printf("Enter size:");
scanf("%d", &n);
int arr[n];
printf("Enter elements:");
for(int i = 0; i < n; i++) 
{scanf("%d", &arr[i]);
}
printf("Enter position:");
scanf("%d", &k);
k = k % n;
int temp[k];
for(int i = 0; i < k; i++) 
{
temp[i] = arr[n-k+i];
}
for(int i = n-k-1; i >= 0; i--) {
arr[i+k] = arr[i];
}
for(int i = 0; i < k; i++) {
arr[i] = temp[i];
}
for(int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
return 0;
}

