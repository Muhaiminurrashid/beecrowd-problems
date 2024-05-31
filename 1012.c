#include<stdio.h>
int main(){

double a,b,c,pi=3.14159,a1,a2,a3,a4,a5;
scanf("%lf %lf %lf",&a,&b,&c);
a1= ((1/2.0) * a * c);
a2= (pi * c * c);
a3 = (((a + b)/2.0) * c);
a4 = (b * b);
a5 = (a * b);
printf("TRIANGULO: %.3lf\n",a1);
printf("CIRCULO: %.3lf\n",a2);
printf("TRAPEZIO: %.3lf\n",a3);
printf("QUADRADO: %.3lf\n",a4);
printf("RETANGULO: %.3lf\n",a5);
return 0;
}