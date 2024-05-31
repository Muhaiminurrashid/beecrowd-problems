#include<stdio.h>
int main(){
int n,i,j;
scanf("%d",&n);
for (i=1;i<=n;i++){
    int size,value,x;
    scanf("%d %d",&size,&value);
    int a[size];
    int min,diff[size];
    for (j=0;j<size;j++){
        scanf("%d",&a[j]);
    }
        min = 0;
    for (j=0;j<size;j++){
        if (a[j] < value ){
            diff[j] = value - a[j];
            }
        else {
            diff[j] = a[j] -  value;
        }
        if (diff[min] > diff[j]){
            min = j;
        }
        
    }
    printf("%d\n",min+1);

}
    return 0;
}