#include<stdio.h>
int main(){
int c,i,j;
char t;
double sum=0,avg,a[12][12];
scanf("%d %c",&c,&t);

for (i=0;i<12;i++){
    for (j=0;j<12;j++){
        scanf("%lf",&a[i][j]);
    }
}
for (j=0;j<12;j++){
    sum+=a[j][c];
}
avg = sum / 12.0;
if (t == 'M'){

printf("%.1lf\n",avg);
}
if (t == 'S'){
    printf("%.1lf\n",sum);
}

    return 0;
}