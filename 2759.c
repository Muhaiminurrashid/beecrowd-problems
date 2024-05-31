#include<stdio.h>
int main(){
char x[4],y[4],z[4];

scanf("%s %s %s",&x,&y,&z);
//x='1';
printf("A = %s, B = %s, C = %s\n",x,y,z);
printf("A = %s, B = %s, C = %s\n",y,z,x);
printf("A = %s, B = %s, C = %s\n",z,x,y);
    return 0;
}