//WAP to find profit or loss percentage given cost price and selling price

#include<stdio.h>
int main(void)
{
float sp,cp,profit,loss;
printf("Enter your cost price:");
scanf("%f",&cp);
printf("Enter your sp:");
scanf("%f",&sp);
if(sp > cp)
{
profit= sp-cp;
printf("PROFIT IS : %0.f%%",(profit/cp)*100);
}
else if(sp<cp)
{
loss= cp-sp;
printf("LOSS IS : %0.f%%",(loss/cp)*100);
}
else
printf("NO PROFIT NO LOSS!");
return 0;
}
