#include<stdio.h>
int main(){
    double n[12][12],sum=0,avg=0;
    int i,j,count=0;
    char a;
    scanf("%c",&a);
    for (i=0;i<12;i++){
        for (j=0;j<12;j++){
            scanf("%lf",&n[i][j]);
        }
    }
  
    for (i=1;i<12;i++){
        for (j=0;j<=i-1;j++){
            //check
            //printf("%d %d ",i,j);
            sum+=n[i][j];
            count++;
        }
        
    }
    avg = sum / count;
    if (a == 'S'){
        printf("%.1lf\n",sum);
    }
    else if (a == 'M'){
        printf("%.1lf\n",avg);
    }


    return 0;
}