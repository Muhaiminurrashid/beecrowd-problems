#include<stdio.h>
int main(){
long long int a,b,o;
while(scanf("%lld %lld",&a,&b) != EOF){

if ( a  > b){
 o = a - b;
 printf("%lld\n",o);
}
else {
    o = b - a;
    printf("%lld\n",o);
}

}
    return 0;
}