#include<stdio.h>
int main(){
double n,food;
scanf("%lf",&n); //test case;
for (int i =1;i<=n;i++){
    double day = 0;
    scanf("%lf",&food);
    while(food > 1){
        food = food / 2.0;
        day++;
        
    }
    printf("%.0lf dias\n",day);
}

    return 0;
}