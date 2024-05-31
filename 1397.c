#include<stdio.h>
int main(){
int a,b;
int n;
while(1){
    scanf("%d",&n); //number of test cases
    if (n==0)break; //last n should be 0, to exit the loop
    int a1=0,b1=0;  // have to initial count here
    for (int i=1;i<=n;i++){ 
    scanf("%d %d",&a,&b);
    //if (( a >= 0 && a <=10 ) && (b >= 0 && b <=10)){

    if (a > b){
        a1++;
    }
    else if ( a < b){
        b1++;
    }
    // else if (a==b){
    //     a1=0;
    //     b1=0;
    // }
    }
    //}
    printf("%d %d\n",a1,b1);
    
}


    return 0;
}