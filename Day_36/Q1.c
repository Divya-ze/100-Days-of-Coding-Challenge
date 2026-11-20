//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/


#include <stdio.h>

int main() {
int r, c;
printf("Enter size: ");
scanf("%d %d", &r, &c);
int arr[r][c];
printf("Enter elements:");
for(int i = 0; i < r; i++)
{
for(int j = 0; j < c; j++) 
{
scanf("%d", &arr[i][j]);
}
}
printf("the matrix is:");
for(int i = 0; i < r; i++) 
{
for(int j = 0; j < c; j++) 
{
printf("%d ", arr[i][j]);
}
printf("\n");
}
return 0;
}

