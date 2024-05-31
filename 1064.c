#include<stdio.h>
int main(){
double n;
int positiveNumbers=0;

double sum=0;
for( int i=1;i<=6;i++){
    scanf("%lf",&n);
    if (n>0){
    positiveNumbers++;
    sum=sum+n;
    }
}
    printf("%d valores positivos\n",positiveNumbers);
    printf("%.1lf\n",sum/positiveNumbers);

return 0;
}