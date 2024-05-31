#include<stdio.h>
int main(){


int n[20],i,j,temp;
for (i=0;i<20;i++){
    scanf("%d",&n[i]);
}
for (i=0;i<10;i++){
    temp=n[i];
    n[i]=n[19-i];
    n[19-i]=temp;
}

    for(i=0;i<20;i++){
    
    printf("N[%d] = %d\n",i,n[i]);
}



    return 0;
}