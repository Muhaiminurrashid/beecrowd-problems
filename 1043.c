#include<stdio.h>

int main(){
double a,b,c,area,p;
scanf("%lf %lf %lf",&a,&b,&c);
if ((a+b)> c && (a+c)> b && (b+c)>a){
    p = a + b + c;
   printf("Perimetro = %.1lf\n",p);
}
else {
    area = 0.5 * ((a+b) *c);
    printf("Area = %.1lf\n",area);
}
return 0;
}