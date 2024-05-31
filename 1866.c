#include<stdio.h>
int main(){
int n,m;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    scanf("%d",&m);
    if (m%2!=0){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
}

    return 0;
}