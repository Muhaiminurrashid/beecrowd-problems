#include<stdio.h>
int main(){
double x,y,MEDIA=0;
scanf("%lf",&x);
scanf("%lf",&y);
x = x * 3.5;
y = y * 7.5;

MEDIA = ((x + y) / (3.5 + 7.5));
printf("MEDIA = %.5lf\n",MEDIA);
return 0;
}