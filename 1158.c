#include<stdio.h>
int main(){
    int n,n1,n2;

    scanf("%d",&n);

    for (int i=1;i<=n;i++){
        int sum=0;
        scanf("%d %d",&n1,&n2);
        
            if (n1 % 2 ==0)
            n1++;
            
        for (int k = 1;k<=n2;k++){
            
                sum+=n1;
                n1+=2;
            
        }
        
            printf("%d\n",sum);
    }

    return 0;
}