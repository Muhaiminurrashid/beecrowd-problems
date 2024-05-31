#include<stdio.h>
#include<math.h>
int main(){
int n,i,p,j;
scanf("%d",&n);
for (i=1;i<=(n);i++){
    int k=0;
    scanf("%d",&p);
    for (j=2;j<sqrt(p);j++){
        if (p % j == 0){
                k++;
                break;
        }
    }
    if (k==0){
        printf("Prime\n");
    }
    else {
        printf("Not Prime\n");
    }

}
    return 0;
}