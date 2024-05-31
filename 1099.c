#include<stdio.h>
int main(){
int n,i,sum;
int a,b,temp;
scanf("%d",&n);
while(n>0){
    scanf("%d %d",&a,&b);
 if (a>b){
    temp=a;
    a=b;
    b=temp;
 }
sum=0;
 for (i=a+1;i<b;i++){
    if (i%2==1){
    sum+=i;
 }
 }
 printf("%d\n",sum);
n--;
}
return 0;
}