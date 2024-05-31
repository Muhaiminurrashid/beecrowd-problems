#include<stdio.h>
int main(){



long long x,i,y,sum=0,temp;

scanf("%lld %lld",&x,&y);
if (x>y){
    temp=x;
    x=y;
    y=temp;
}

sum = ((y-x+1)*(y+x))/2;

printf("%lld\n",sum);




    return 0;
}