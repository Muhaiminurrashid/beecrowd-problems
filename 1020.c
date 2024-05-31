#include<stdio.h>
int main(){
int n,y,m,d,y1,m1,m2,d1;
scanf("%d",&n);
y=n/365;
y1=n%365;
m=y1/30;
d1=y1%30;
printf("%d ano(s)\n",y);
printf("%d mes(es)\n",m);
printf("%d dia(s)\n",d1);
return 0;
}