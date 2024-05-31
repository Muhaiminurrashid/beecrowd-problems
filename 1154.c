#include<stdio.h>
int main(){
    int n;
    double sum =0,count=0;

while(1){
scanf("%d",&n);

 
if (n<0)break;
else{
int num=n;
count++;
sum+=num;
}
 
}
printf("%.2lf\n",(sum/(count)));
  return 0;
}