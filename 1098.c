#include<stdio.h>
int main(){

float i,j;

for (i=0;i<2.1;i+=.2){
    for (j=1.0;j<4.0;j++){
        if ((i>0 && i<1) || (i>1 &&  i<2)){
         printf("I=%.1f",i);
            printf(" J=%.1f\n",j+i);
        }
    
        else {
            printf("I=%d",(int) i);
            printf(" J=%d\n",(int) i + (int)j);
        }
    }

}
return 0;
}