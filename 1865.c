#include<stdio.h>
int main(){
int n,c;
char a[100];
scanf("%d",&n);
int i=1;
while(i<=n){
    scanf("%s %d",&a,&c);
    if (a[0]=='T' && a[1]=='h' && a[2]== 'o' && a[3] == 'r')
{
    printf("Y\n");
}
else printf("N\n");
    i++;
}
    return 0;
}