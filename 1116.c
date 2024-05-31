#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
double  x,y;
double z=0;

for (int i=1;i<=n;i++){
    scanf("%lf %lf",&x,&y);
    if (y==0.0){
        printf("divisao impossivel\n");
    }
    if (y!=0){
        z=x/y;
        printf("%.1lf\n",(z));
    
}

}





    return 0;
}