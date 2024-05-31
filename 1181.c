#include<stdio.h>
int main(){
int l,i,j;
char t;
double sum=0,avg,a[12][12];
scanf("%d %c",&l,&t);

for (i=0;i<12;i++){
    for (j=0;j<12;j++){
        scanf("%lf",&a[i][j]);
    }
}
for (i=0;i<12;i++){
    sum += a[l][i];
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