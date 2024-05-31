#include<stdio.h>
#include<string.h>
void solve (){
    char a[1001];
    scanf("%s",a);
    int len=strlen(a);
    if (len==5)printf("3\n");
    else if (len==3){
        if (a[0]=='o' && a[1] =='n'||a[1]=='n' && a[2]=='e'||a[0]=='o' && a[2]=='e'){
            printf("1\n");
        }
        if (a[0]=='t' && a[1] =='w'||a[1]=='w' && a[2]=='o'||a[0]=='t' && a[2]=='o'){
            printf("2\n");
    }
    } 
}
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        solve();
    }
    return 0;
}