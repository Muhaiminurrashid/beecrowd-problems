#include<stdio.h>
long long factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
     /*if (m<=1){
        return 1;
    }
    return m * factorial(m-1);*/
}
int main(){
int m,n;
long long sum=0;
while(scanf("%d %d",&m,&n)==2){
    sum=factorial(m)+factorial(n);
printf("%lld\n",sum);

}






    return 0;
}