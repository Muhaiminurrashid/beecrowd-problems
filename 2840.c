#include<stdio.h>
int main(){
int r,n,l,v;
double  pi=3.1416;
scanf("%d %d",&r,&l);
v = (4.0/3) * pi * (r*r*r);
n= l / v;
printf("%d",n);
 return 0;
}