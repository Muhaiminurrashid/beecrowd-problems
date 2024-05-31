#include<stdio.h>
int main(){
int d1,d2,h1,h2,m1,m2,s1,s2,sum1,sum2,diff,day,hr,min,sec;
scanf("%*s %d",&d1);
scanf("%d %*s %d %*s %d ",&h1,&m1,&s1);
scanf("%*s %d",&d2);
scanf("%d %*s %d %*s %d ",&h2,&m2,&s2);
sum1= ((d1*24*3600) + (h1*3600) + (m1*60) + s1);
sum2= ((d2*24*3600) + (h2*3600) + (m2*60) + s2);
diff = (sum2 -sum1);
day = diff/(24*3600);
diff = diff % (24*3600);
hr = diff / 3600;
diff = diff % 3600;
min = diff / 60;
sec = diff % 60;
printf("%d dia(s)\n",day);
printf("%d hora(s)\n",hr);
printf("%d minuto(s)\n",min);
printf("%d segundo(s)\n",sec);
return 0;
}