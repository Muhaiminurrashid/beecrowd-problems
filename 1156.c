#include<stdio.h>
void solve(){

    long int n,i,sum=0;
    scanf("%ld",&n);
    for(i=1;i<n;i++){
        if(n % i == 0){
            sum+=i;
        }
    }
    if (sum==n)printf("%d eh perfeito\n",n);
    else printf("%d nao eh perfeito\n",n);
}
int main(){
int t;
scanf("%d",&t);
while(t--){
    solve();
}

    return 0;
}