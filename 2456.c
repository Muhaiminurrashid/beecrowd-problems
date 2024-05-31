#include<stdio.h>
int main(){
int n,i,j,cards[5],increase=1,decrease=1;
for(i=0;i<5;i++){
    scanf("%d",&cards[i]);
}
for(i=0;i<4;i++){
    if (cards[i]>cards[i+1]){
    increase=0;
    break;
}
}
for(i=0;i<4;i++){
    if (cards[i]<cards[i+1]){
    decrease=0;
    break;
}
}
if (increase) printf("C\n");

else if (decrease) printf("D\n");

else {
    printf("N\n");
}

    return 0;
}