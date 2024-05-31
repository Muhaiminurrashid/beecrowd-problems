#include<stdio.h>
int main(){

int n,i,min,position;

scanf("%d",&n);

int a[n];
for (i=0;i<n;i++){
    scanf("%d",&a[i]);
}

min = a[0];
for (i=1;i<n;i++){
    if (min>a[i]){
        min=a[i];
        position=i;
    }
}
printf("Menor valor: %d\n",min);
printf("Posicao: %d\n",position);

    return 0;
}