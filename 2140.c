#include<stdio.h>
int main(){
int m,n,ex,two=0,q=0;

    while(1){
        scanf("%d %d",&m,&n);
    if (m == 0 && n == 0) break;

    ex = n - m;
     int a[]={2,5,10,20,50,100};
        int possible=0;
    for (int i=0; i<5;i++){
        for (int j = i + 1; j < 6;j++){

        two=a[i] + a[j];
        //q = ex  two;
          //printf("ex: %d, i: %d, j: %d, two: %d\n", ex, i, j, two);
    if ( ex == two){
        possible =1;
        break;

        }
        
    }
    if (possible) {
     break;
    }
    
        }   
    

 if (possible) {

printf("possible\n");
 }    
else {
        printf("impossible\n");
    }
    }
    


    return 0;
}