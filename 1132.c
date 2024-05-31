#include<stdio.h>
int main(){

int x,y,sum=0,i,temp;
scanf("%d %d",&x,&y);
if (x>y){
    temp=y;
    y=x;
    x=temp;
}
for (i=x;i<=y;i++){
    if (i%13!=0){
        sum+=i;
    }
}
printf("%d\n",sum);
return 0;
}