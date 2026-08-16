//Write a program to input a character and check whether it is a vowel or consanant using if-else.
#include<stdio.h>
int main(void)
{
char v;
printf("Enter your character:");
scanf("%c",&v);
if (v=='a'||'e'||'o'||'i'||'u')
printf("The character %c is a vowel",v);
else 
printf("The character %c is a consonant",v);
return 0;
}
