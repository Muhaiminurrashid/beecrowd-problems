#include<stdio.h>
int main(){
    int n,h,d,g;
    scanf("%d",&n);
    int i=0;
    while(i<n){

        scanf("%d %d %d",&h,&d,&g);
        if ((h >= 200 && h <=300) && (d>=50) && (g>=150) ){
            printf("Sim\n");
        }
        else{
            printf("Nao\n");
        }

        i++;
    }
    return 0;
}