#include<stdio.h>
int main(){
int n,i;
scanf("%d",&n);
 int t[100];
for (int i=0;i<n;i++){
    scanf("%d",&t[i]);
    }
int min = 0;
for (i=1;i<n;i++){
    if (t[min] > t[i] ){
        min = i;
    }
}
printf("%d\n",min+1);


    return 0;
}