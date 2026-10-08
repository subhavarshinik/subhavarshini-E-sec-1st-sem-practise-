#include<stdio.h>
int main(){ 
 int a;
 int b;
 int c;
 printf("enter three numbers :");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b){
 printf("a is greater than b");
 }
 else if(b>a){
 printf("b is greater than a");
 }
 else{
 printf("c");
 }
 return 0;
 }
