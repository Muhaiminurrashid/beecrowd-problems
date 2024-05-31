#include<stdio.h>
int main(){
int i;
double x[100];
double t,min;
while (scanf ("%lf",&t) != EOF){
    for (i = 0;i<t;i++){
        scanf("%lf", &x[i]);
}
    min = x[0];
    for (i = 1;i<t;i++){
        if (x[i] < min){
            min = x[i];
        }
    }
    printf("%.2lf\n",min);
}


    return 0;
}