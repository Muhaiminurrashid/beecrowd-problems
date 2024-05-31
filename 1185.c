#include<stdio.h>
int main(){
double n[12][12],sum=0,avg;
int i,j,count=0;
char c;
scanf("%c",&c);
for (i=0;i<12;i++){
    for (j=0;j<12;j++){
        scanf("%lf",&n[i][j]);
    }
}
for (i=0;i<=10;i++){
    for (j=10-i;j>=0;j--){
        sum+=n[i][j];
        count++;
    }
}
avg = sum / count;
if ( c == 'S'){
    printf("%.1lf\n",sum);
}
else if ( c == 'M'){
    printf("%.1lf\n",avg);
}

    return 0;
}