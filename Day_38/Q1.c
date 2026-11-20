//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/


#include <stdio.h>

int main()
{
int r, c;
printf("Enter size:");
scanf("%d %d", &r, &c);
int a[r][c], b[r][c], sum[r][c];
printf("Enter the elements");
for(int i = 0; i < r; i++) {
for(int j = 0; j < c; j++) {
scanf("%d", &a[i][j]);
}
}
printf("Enter Size:");
int r2, c2;
scanf("%d %d", &r2, &c2);
if(r != r2 || c != c2) {
printf("Addition not possible");
return 0;
}
printf("Enter elements:");
for(int i = 0; i < r; i++) {
for(int j = 0; j < c; j++) {
scanf("%d", &b[i][j]);
}
}
for(int i = 0; i < r; i++) {
for(int j = 0; j < c; j++) {
sum[i][j] = a[i][j] + b[i][j];
}
}
for(int i = 0; i < r; i++) {
for(int j = 0; j < c; j++) {
printf("%d ", sum[i][j]);
}
printf("\n");
}
return 0;
}

