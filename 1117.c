#include<stdio.h>
int main(){
    int count=0;
    double n,a[2],avg;
    while(1){
        scanf("%lf",&n);
        if (n >= 0 && n <= 10){
            a[count]=n;
            count++;
        }
        else {
            printf("nota invalida\n");
        }
        if (count > 1) break;

    }
    avg = ((a[0] + a[1]) / 2.0);
    printf("media = %.2lf\n",avg);

    return 0;
}