#include<stdio.h>
int main(){


int x=0,y=1,sum=0;
// int num1,num2;
int n;

scanf("%d",&n);
//  printf("%d %d",x,y);

for (int i=1;i<=n;i++){
    printf("%d", x);
    if (i != n){
        printf(" ");
    }
    sum=x+y;
    x=y;
    y=sum;

}
printf("\n");


    return 0;
}