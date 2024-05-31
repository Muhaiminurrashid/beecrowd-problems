#include<stdio.h>
int main(){
double X,Y,consumtion;
scanf("%lf %lf",&X,&Y);
consumtion = X / Y;
printf("%0.3lf km/l\n",consumtion);
return 0;
}
