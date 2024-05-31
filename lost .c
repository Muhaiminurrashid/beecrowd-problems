#include<stdio.h>
int main(){
//test case
int n,i,j,s,a[10],qt;
scanf("%d",&n);

for (i=0;i<n;i++){
    scanf("%d %d",&s,&qt);

    for ( j = 0;j < s ; j++){
        scanf("%d",&a[j]);
        if ( a[j]== qt || a[++j]==qt || a[--j] == qt){
            break;
        }
    }
    printf("%d\n",j+1);

}


    return 0;
}