#include<stdio.h>
int main(){
double n;
scanf("%lf",&n);
int a[100];
a[0]=n;
printf("N[0] = %.4lf\n",n);
for (int i=1;i<100;i++){
    n=n/2;
    a[i]=n;
    printf("N[%d] = %.4lf\n",i,n);

}

return 0;
}