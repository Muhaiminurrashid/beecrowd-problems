#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,j,index;
    index=-1;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        if (a[i-1] > a[i]){
            index=i;
            break;
        }
    }
    printf("%d\n",index+1);


    return 0;
}