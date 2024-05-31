#include<stdio.h>
int main(){
int n,m,i,j,m1,n1,k;
scanf("%d %d",&n,&m);
int a[n][m];
for (i=0;i<n;i++){
    for(j=0;j<m;j++){
        scanf("%d",&a[i][j]);
    }
}
k=0;
n1=0;
m1=0;
for (i=0;i<n;i++){
    for(j=0;j<m;j++){
       /*if ((a[i][j] == 7 && a[i][j+1]==7 && a[i][j+2] ==7)  && (a[i+1][j]==7 && a[i+1][j+1]==42 && a[i+1][j+2]==7) 
       && (a[i+2][j]==7 && a[i+2][j+1]==7 && a[i+2][j+2] ==7))
       */

if(a[i][j]==42){
    if((a[i-1][j-1]==7&&a[i-1][j]==7&&a[i-1][j+1]==7&&a[i][j-1]==7&&a[i][j+1]==7&&a[i+1][j-1]==7&&a[i+1][j]==7&&a[i+1][j+1]==7))
    {

         k=1;
        n1= i+1;
        m1=j+1;
        break;
       
       }
       if (k==1)break;
    }
}
}
    if (k==1){
         printf("%d %d\n",n1,m1);
    }
    if (k==0){
          printf("%d %d\n",n1,m1);
    }
  

    return 0;
}