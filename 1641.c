#include<stdio.h>
#include<math.h>
int main(){

double r,h,l,a1;
double a2;

int count=0;
while(1){

scanf("%lf",&r);
if (r==0)break;
scanf("%lf %lf",&h,&l);
a1= r * 2;
a2 = sqrt(h * h + l * l);
count++;
if ( a1 >= a2){
    printf("Pizza %d fits on the table.\n",count);
}
else{
    printf("Pizza %d does not fit on the table.\n",count);
}

}


return 0;
}