#include<stdio.h>
#include<limits.h>
int main(){
int n,a[1000],first,sec,i,first_ind,sec_ind;

    while(1){
        scanf("%d",&n);
        if (n ==0)break;
        for (i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        first = sec = INT_MIN;
        first_ind = sec_ind = -1;
    
        for (i=0;i<n;i++){
        if(a[i] > first){
            sec = first;
            sec_ind = first_ind;

            first = a[i];
            first_ind = i;
        }
        else if (a[i] > sec && a[i] < first){
            sec = a[i];
            sec_ind = i;
        }
    }
    printf("%d\n",sec_ind + 1);
}

    return 0;
}