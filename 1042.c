#include<stdio.h>

int main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
//a b c''
//a c b''
//b a c''
//b c a''
//c a b''
//c b a
if ((a<b) && (b<c)){
    printf("%d\n%d\n%d\n",a,b,c);
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);
}
else if ((b<a) && (a<c)){
    printf("%d\n%d\n%d\n",b,a,c);
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);
}
else if (a<c && c<b){
     printf("%d\n%d\n%d\n",a,c,b);
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);
}
else if (b<c && c<a){
     printf("%d\n%d\n%d\n",b,c,a);
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);
}
else if (c < a && a < b){
     printf("%d\n%d\n%d\n",c,a,b);
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);
}
else if (c < b && b <a){
     printf("%d\n%d\n%d\n",c,b,a);
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);
}
return 0;
}