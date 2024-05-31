#include<stdio.h>
int main(){
int n,positive=0;
for (int i=1;i<=5;i++){
    scanf("%d",&n);
    if (n%2==0){
        positive++;
    }
}
    printf("%d valores pares\n",positive);
return 0;
}