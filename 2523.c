#include<stdio.h>
int main(){
    char n[27];
    while(scanf("%s",&n) !=EOF)
{
    int size,i,k;
    scanf("%d",&size);
    int index[size];
    for(i=0;i<size;i++){
        scanf("%d",&k);
        index[i]=k;
    }
    for(i=0;i<size;i++){
        
        printf("%c",n[index[i]-1]);
    }
    printf("\n");
    


}
    return 0;
}