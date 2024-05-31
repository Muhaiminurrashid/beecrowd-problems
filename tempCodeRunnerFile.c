#include<stdio.h>
#include<string.h>
void len(){
    int len1,len2;
    char a[1001],b[1001];
    scanf("%s %s",a,b);
    len1=strlen(a);
    len2=strlen(b);
    int i,j;
if (len1<len2) printf("nao encaixa\n");
    for(i=len1-1,j=len2-1; j>=0;i--,j--){
    if (a[i]!=b[j]){
         printf("nao encaixa\n");
         break;      
    }
    else printf("encaixa\n"); break;
   }
}
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        len();
    }
    return 0;
}