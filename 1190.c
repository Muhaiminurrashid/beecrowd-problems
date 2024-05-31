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
    for (i=1;i<=5;i++){   
        for (j=12-i;j<=11;j++){                   
             //i=1,j=11
            //i=2,j=10
             //i=5,j=7
                                                    
        sum+=n[i][j];
        count++;
        }        
    }
    
    for (i=6;i<=10;i++){   
        for (j=i+1;j<=11;j++){                   
             //i=6,j=7,
            //i=7,j= (8)
             //i=8,j=9
             //i=10,j=11
                                                    
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