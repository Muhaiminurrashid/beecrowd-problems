#include<stdio.h>
int main(){
int n,i,j,position,count;
while(1){
    scanf("%d",&n);
    if (n==0)break;
    for(i=1;i<=n;i++){
        int a[5];
        position =0;
        count=0;
       for (j=0;j<5;j++){
        scanf("%d",&a[j]);
       }
        
       for(j=0;j<5;j++){
        if (a[j] <= 127){
            position=j;
            count++;
        }
       }
       if (count>=2){
        printf("*\n");
       }
       else if (count == 1){
        if (position==0)printf("A\n");
        else if (position==1)printf("B\n");
        else if (position==2)printf("C\n");
        else if (position==3)printf("D\n");
        else if (position==4)printf("E\n");
       }
        else {
            printf("*\n");
        }
    }
}
    return 0;
}