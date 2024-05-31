#include<stdio.h>
int main(){

long long n,i;
scanf("%lld",&n);

for (i=1;i<=n;i++){
    
    printf("Ho");
    if (i!=n){
        printf(" ");
    }
    if (i==n){
        printf("!\n");
    }
    
}
 return 0;
}