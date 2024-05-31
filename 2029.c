#include<stdio.h>
int main(){
double v,d,a,pi=3.14,h,r;
while(scanf("%lf %lf",&v,&d) != EOF){
    r = d / 2.00;
    //h = (v / (pi * r * r));
    //a = pi * r * r;
    printf("ALTURA = %.2lf\n", (v / (pi * r * r)));
    printf("AREA = %.2lf\n", pi * r * r);
}
    return 0;
}