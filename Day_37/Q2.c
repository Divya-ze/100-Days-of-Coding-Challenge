//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/


#include <stdio.h>

int main() {
int r, c;
printf("Enrer Size:");
scanf("%d %d", &r, &c);
int arr[r][c];
printf("Enter elements:");
for(int i = 0; i < r; i++) {
for(int j = 0; j < c; j++) {
scanf("%d", &arr[i][j]);
}
}
for(int i = 0; i < c; i++) {
for(int j = 0; j < r; j++) {
printf("%d ", arr[j][i]);
}
printf("\n");
}
return 0;
}

