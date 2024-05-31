#include<stdio.h>
int main(){

int n,x;
scanf("%d",&n);

for (int i=1;i<=n;i++){
    int count=0;
    scanf("%d",&x);
    for (int j=2;j<x;j++){
        if (x % j == 0)
        {
        count++;
        break;
        }
}
if (count==0){
    printf("%d eh primo\n",x);

}
else {
    printf("%d nao eh primo\n",x);
}

}
return 0;
}