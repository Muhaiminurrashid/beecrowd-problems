#include<stdio.h>



int main(){


long long a[61];
int n,x,i,j;
a[0]=0;
a[1]=1;
for (i=2;i<=60;i++){
    a[i]=a[i-2]+a[i-1];
}
scanf("%d",&n);
for ( j=0;j<n;j++){
   scanf("%d",&x);
    printf("Fib(%d) = %lld\n",x,a[x]);
}


    return 0;
}