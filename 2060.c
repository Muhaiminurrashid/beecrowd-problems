#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n],x=0,y=0,z=0,k=0;
for (int i=0;i<n;i++){
    scanf("%d",&a[i]);
    if (a[i] % 2 ==0) x++;
    if (a[i] % 3 ==0) y++;
    if (a[i] % 4 ==0) z++;
    if (a[i] % 5 ==0) k++;
    
}
printf("%d Multiplo(s) de 2\n",x);
printf("%d Multiplo(s) de 3\n",y);
printf("%d Multiplo(s) de 4\n",z);
printf("%d Multiplo(s) de 5\n",k);


    return 0;
}