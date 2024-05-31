#include<stdio.h>
int main(){
int postiveNumberCount=0;
double n;
for (int i=1;i<=6;i++){
    scanf("%lf",&n);
    if (n>0){
        postiveNumberCount++;

    }
}
    printf("%d valores positivos\n",postiveNumberCount);
return 0;
}
