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
    int x=2;
    for (i=7;i<12;i++){   
        for (j=i-1;j>=i-x;j--){                   
             //i=7,j=6,5,
            //i=8,j=7,4
             //i=9,j=8,3
                                                    
        sum+=n[i][j];
        count++;
        }
        x+=2;
        
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