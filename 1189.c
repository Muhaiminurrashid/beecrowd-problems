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
        for (j=i-1;j>=0;j--){                   
             //i=1,j=0,0,
            //i=2,j=1,0
             //i=3,j=2,0
                                                    
        sum+=n[i][j];
        count++;
        }        
    }
    int x=0;
    for (i=6;i<=10;i++){   
        for (j=0;j<=10-i;j++){                   
             //i=6,j=4,
            //i=7,j= (3)
             //i=8,j=2
                                                    
        sum+=n[i][j];
        count++;
        }
        x++;
             
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