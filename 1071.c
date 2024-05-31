#include<stdio.h>

int main(){
int a,b,min,max;
scanf("%d %d",&a,&b);
int sum=0;

for (int i=b+1;i<a;i++){
    if (i%2!=0){
        sum=sum+i;
    }
}
        printf("%d\n",sum);
return 0;
}