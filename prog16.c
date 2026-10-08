#include <stdio.h>
int main()
{
 int a;
 int b;
 printf("enter a number:");
 scanf("%d%d",&a,&b);
 if(a%5==0 && b%10==0)
 {
 printf("the number is divisible by 5 and 10");
 }
 else
 {
 printf("the number is not divisible by 5 and 10 ");
 }
 return 0;
 }
 
 
