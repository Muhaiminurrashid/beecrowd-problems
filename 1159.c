#include<stdio.h>
int main(){
int n;
while(1)
{
scanf("%d",&n);
    if(n==0)break;
    int sum=0;

for (int i=1;i<=5;i++){

    if (n%2==0){
       n=n;
    }
    else {
        n=n+1; 
    }
     sum+=n;

     n=n+2;
}
     printf("%d\n",sum);

}
    return 0;
}