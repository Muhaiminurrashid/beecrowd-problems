#include<stdio.h>
int main(){



double n[100];
for(int i=0;i<100;i++){

    scanf("%lf",&n[i]);
}


for(int i=0;i<100;i++){
    if (n[i]<=10.0)
    printf("A[%d] = %.1lf\n",i,n[i]);
}

return 0;
}