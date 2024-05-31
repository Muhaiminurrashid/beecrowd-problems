#include<stdio.h>
#include<math.h>


int main(){
    double x1,y1,x2,y2,r1,r2,r;
    double c1c2;
    while(scanf("%lf %lf %lf %lf %lf %lf",&r1,&x1,&y1,&r2,&x2,&y2) != EOF){
        c1c2 = sqrt ((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
        
        if (c1c2 + r2 <= r1){
            printf("RICO\n");
        }
        else{
            printf("MORTO\n");
        }
    }

    return 0;
}