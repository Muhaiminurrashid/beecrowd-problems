#include<stdio.h>
#include<math.h>
int main(){
    int  n,h,c,l;
    double oti,area;
while(scanf("%d",&n) != EOF){
    scanf("%d %d %d",&h,&c,&l);

    
    oti = n * (sqrt(h*h + c*c)) / (100.0 * 100.0);
    area = (oti * l);

    printf("%.4lf\n",area);
}


    return 0;
}