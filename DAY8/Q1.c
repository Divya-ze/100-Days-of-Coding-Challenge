// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main(void)
{
char z;
printf("Enter your character:");
scanf("%c",&z);
if(z>='A' && z<='Z')
printf("The character  %c is an Uppercase_alphabet",z);
else if(z>= 'a' && z<= 'z')
printf("The character %c is a lowercase_alphabet",z);
else if (z>='0' && z<='9')
printf("The character %c is a Digit",z);
else 
printf("The character %c is a special character",z);
return 0;
}

