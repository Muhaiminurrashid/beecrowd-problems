#include<stdio.h>

int main(){
double n;
scanf("%lf",&n);
n = n * 100;
int notes;
notes = n;
int n100,n50,n20,n10,n5,n2,rem,p100,p50,p25,p10,p05,p01;
printf("NOTAS:\n");
//100
n100 = notes / (100 * 100);
printf("%d nota(s) de R$ 100.00\n",n100);
rem =  notes % 10000;
//50
n50 = rem / 5000;
printf("%d nota(s) de R$ 50.00\n",n50);
rem = rem % 5000;
//20
n20 = rem / 2000;
printf("%d nota(s) de R$ 20.00\n",n20);
rem = rem % 2000;
 //10 
n10 = rem / 1000;
printf("%d nota(s) de R$ 10.00\n",n10);
rem = rem % 1000;
//5
n5 = rem / 500;
printf("%d nota(s) de R$ 5.00\n",n5);
rem = rem % 500;
//2
n2 = rem / 200;
printf("%d nota(s) de R$ 2.00\n",n2);
rem = rem % 200;
printf("MOEDAS:\n");
 //p1
p100 = rem / 100;
printf("%d moeda(s) de R$ 1.00\n",p100);
rem = rem % 100;
 //p.50
p50 = rem / 50;
printf("%d moeda(s) de R$ 0.50\n",p50);
rem = rem % 50;
 //p.25
p25 = rem / 25;
printf("%d moeda(s) de R$ 0.25\n",p25);
rem = rem % 25;
 //p.10
p10 = rem / 10;
printf("%d moeda(s) de R$ 0.10\n",p10);
rem = rem % 10;
 //p.05
 p05 = rem / 5;
printf("%d moeda(s) de R$ 0.05\n",p05);
rem = rem % 5;
 //p01
 p01 = rem / 1;
printf("%d moeda(s) de R$ 0.01\n",p01);
return 0;
}