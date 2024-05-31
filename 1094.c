#include<stdio.h>
int main(){

int n,i,x,frog=0,rat=0,rabbit=0,sum=0;
char c;
float f,r,rab;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    scanf("%d %c",&x,&c);
    if (c=='C'){
        rabbit+=x;
    }
    if (c=='R'){
        rat+=x;
    }
    if (c=='S'){
        frog+=x;
    }
    sum+=x;

}
rab=(float)rabbit/sum*100;
r=(float)rat/sum*100;
f=(float)frog/sum*100;

printf("Total: %d cobaias\n",sum);
printf("Total de coelhos: %d\n",rabbit);
printf("Total de ratos: %d\n",rat);
printf("Total de sapos: %d\n",frog);
printf("Percentual de coelhos: %.2f %%\n",rab);
printf("Percentual de ratos: %.2f %%\n",r);
printf("Percentual de sapos: %.2f %%\n",f);



    return 0;
}