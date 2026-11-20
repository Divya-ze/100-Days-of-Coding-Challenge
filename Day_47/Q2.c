//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/


#include <stdio.h>

int main() {
char str[200], longest[100];
int i, j = 0, max = 0;
printf("Enter a sentence: ");
fgets(str, sizeof(str), stdin);
for(i = 0; ; i++) {
if(str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
j++;
}
else {
if(j > max) {
max = j;
int k;
for(k = 0; k < j; k++) {
longest[k] = str[i - j + k];
}
longest[j] = '\0';
}
j = 0;
}
if(str[i] == '\0') {
break;
}}
printf("%s", longest);
return 0;
}

