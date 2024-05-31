#include<stdio.h>
#include<string.h>
int main(){
    char L[511];
    gets(L);
    int len = strlen(L);
    if(len <=80)printf("YES\n");
    else printf("NO\n");


    return 0;
}