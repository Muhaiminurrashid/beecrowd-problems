#include<stdio.h>
#include<string.h>
int main(){
int n;
scanf("%d",&n);
char g[110001];
int i=0;
while(i < n){
   scanf("%s",&g);
    int j=0;
    double len = (strlen(g) * .01);
    // double len=0.0;
    // while(g[j]!='\0'){
    //     len++;
    //     j++;
    // }
    printf("%.2lf\n",len);
    i++;
}

    return 0;
}