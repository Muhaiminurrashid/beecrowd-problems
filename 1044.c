#include<stdio.h>

int main(){
int n,a;
scanf("%d %d",&n,&a);
if ((a%n==0) || (n%a==0)){
    printf("Sao Multiplos\n");
}
else {
    printf("Nao sao Multiplos\n");
}
return 0;
}