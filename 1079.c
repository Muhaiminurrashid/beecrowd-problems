#include<stdio.h>
int main(){
int n;
double a,b,c;
double avg=0;

scanf("%d",&n);
for(int i=1;i<=n;i++){
    scanf("%lf %lf %lf", &a,&b,&c);
    avg =((a*2 + b*3 + c*5)/10);
    printf("%.1lf\n", avg);
}
return 0;
}