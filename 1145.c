#include<stdio.h>
int main(){

int x,y,i;
scanf("%d %d",&x,&y);

 for (i = 1; i <= y; i++) {
        printf("%d", i);
        if (i%x==0 || i==x) {
            printf("\n");
        } else {
            printf(" ");
        }
    }


    return 0;
}

