#include<stdio.h>
#include<math.h>
int main(){

int n;
scanf("%d",&n);
for (int i=1;i<=n;i++){
    int x=pow(i,2);
    int y=pow(i,3);
    printf("%d %d %d\n", i, x,y);
}

return 0;
}