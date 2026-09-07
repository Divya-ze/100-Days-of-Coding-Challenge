//Q40: Write a program to find the 1’s complement of a binary number and print it.


#include<stdio.h>
int main(void)
{
int a,rem,rev=0;
printf("Enter your no.:");
scanf("%d",&a);
while(a>0)
{rem=a%10;
if(rem==0)
{rem=1;
}
else
{rem=0;
}
rev=rev*10+rem;
a=a/10;
}
while(rev>0)
{rem=rev%10;
printf( "%d",rem);
rev=rev/10;
}
return 0;
}
