//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/



#include <stdio.h>

int main() {
int r, c, sum = 0;
printf("Enter Size:");
scanf("%d %d", &r, &c);
int arr[r][c];
printf("Enter elemnets");
for(int i = 0; i < r; i++) {
for(int j = 0; j < c; j++) {
scanf("%d", &arr[i][j]);
}
}
if(r != c) {
printf("Not a square matrix");
}
else {
for(int i = 0; i < r; i++) {
sum = sum + arr[i][i];
}
printf("%d", sum);
}
return 0;
}

