#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int i=0;
while(i<n){

int x,y,area;
scanf("%d %d",&x,&y);
area = 0.5 * x * y;
printf("%d cm2\n",area); 
i++;
}
    return 0;
}