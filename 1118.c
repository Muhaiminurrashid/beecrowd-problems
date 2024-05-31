#include<stdio.h>
int main(){
    double n,i,sum=0,avg;
    int x,count=0;
    while(1)
    {
        scanf("%lf",&n);
        if ( n >= 0 && n <=10.0){
            sum+=n;
             count ++;
        if (count == 2){
            avg = sum / 2.0;
            printf("media = %.2lf\n",avg);

            do {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d",&x);
            }
            while ( x < 1 || x > 2);
              if (x==2){
                break;
             }
             else if (x==1){
                sum = 0;
                count = 0;
                
             }
         }
         }
         else {
            printf("nota invalida\n");
         }

        
    }



    return 0;
}