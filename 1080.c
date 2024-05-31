#include<stdio.h>
int main(){
int n,i,max=0,position;

for (i=1;i<=100;i++){
    scanf("%d",&n);
    if (max<n){
        max=n;
        position =i;
    }
}
printf("%d\n%d\n",max,position);


    return 0;
}