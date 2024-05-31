#include<stdio.h>
int main(){
    int n,m,i,j;
    while(scanf("%d %d",&n,&m) && n!=0 && m!=0){
    int a[20000]={0};
    for (int i=0;i<m;i++){
        int b;
        scanf("%d",&b);
        a[b]++;
    }
    int count =0;
    for(int i=1;i<=n;i++){
        if(a[i]>1){
            count++;
        }
    }
    printf("%d\n",count);

    }
    return 0;
}