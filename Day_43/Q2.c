//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/


#include <stdio.h>

int main() {
char str[100];
int count = 0, flag = 1;
printf("Enter String:");
scanf("%s", str);
for(int i = 0; str[i] != '\0'; i++) {
count++;
}
for(int i = 0; i < count / 2; i++) {
if(str[i] != str[count - 1 - i]) {
flag = 0;
break;
}
}
if(flag == 1) {
printf("Palindrome");
}
else {
printf("Not palindrome");
}
return 0;
}

