//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/


#include <stdio.h>

int main() 
{
int r, c, flag = 1;
printf("Enter Size:");
scanf("%d %d", &r, &c);
int arr[r][c];
printf("Enter elements:");
for(int i = 0; i < r; i++) {
for(int j = 0; j < c; j++) {
scanf("%d", &arr[i][j]);
}
}
// Check if matrix is square
if(r != c) {
flag = 0;
}
else {
for(int i = 0; i < r; i++) {
for(int j = i + 1; j < r; j++) {
if(arr[i][i] == arr[j][j]) {
flag = 0;
break;
}
}
if(flag == 0) {
break;
}}}
if(flag == 1) {
printf("True");
}
else {
printf("False");
}
return 0;
}

