//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include<stdio.h>
int main(void)
{
int a ,b,ans;
char opt;
printf("Enter your nos. and then the operation to be done:");
scanf("%d %d %c",&a,&b,&opt);
switch (opt)
{
case '+' :
ans=a+b;
printf("The ans is %d",ans);
break;
case '-':
ans=a-b;
printf("The ans is %d",ans);
break;
case '*' :
ans=a*b;
printf("The ans is %d",ans);
break;
case '/' :
ans=a/b;
printf("The ans is %d",ans);
break;
case '%' :
ans=a%b;
printf("The ans is %d",ans);
break;
default:
printf("no operation in progress!");
}
return 0;
}

