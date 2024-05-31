#include<stdio.h>
int main(){
int x,i,z,sum=0,count=1;
scanf("%d %d",&x,&z);
while (z <=x ){
    scanf("%d",&z);
}
    if ( z > x){
        for (i=x;i<z;i++){
            sum += i;
            if (sum < z){
                count++;
            }
        }
    
    
}
printf("%d\n",count);

    return 0;
}