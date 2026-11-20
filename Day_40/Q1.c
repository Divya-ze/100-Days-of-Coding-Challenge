//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/


#include <stdio.h>

int main() {
int r, c;
printf("Enter Size:");
scanf("%d %d", &r, &c);
int arr[r][c];
printf("Enter Elements:");
for(int i = 0; i < r; i++) {
for(int j = 0; j < c; j++) {
scanf("%d", &arr[i][j]);
}}
for(int d = 0; d < r + c - 1; d++) {
int row = (d < r) ? d : r - 1;
int col = d - row;
while(row >= 0 && col < c) {
printf("%d ", arr[row][col]);
row--;
col++;
}}
return 0;
}

