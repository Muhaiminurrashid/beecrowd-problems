#include<stdio.h>
#include<math.h>

int main (){
double a,b,c;
scanf("%lf %lf %lf",&a,&b,&c);
if ((a >= (b + c)) || ((b >= (a + c)))  || (c >=(a+b))
){
printf("NAO FORMA TRIANGULO\n");
}
else if (((a*a)== (b*b + c*c)) || ((b*b)== (a*a + c*c)) || ((c*c)== (b*b + a*a))
){
printf("TRIANGULO RETANGULO\n");
}
else if ((a*a > (b*b + c*c)) || ((b * b > (a*a + c*c))) || ((c*c > (b*b + a*a)))
){
printf("TRIANGULO OBTUSANGULO\n");
}
else if ((a*a < (b*b + c*c)) || ((b * b < (a*a + c*c))) || ((c*c < (b*b + a*a)))
){
printf("TRIANGULO ACUTANGULO\n");
}
if (a==b && a==c){
printf("TRIANGULO EQUILATERO\n");
}
if ((a==b && (a!=c || b!=c )) || (a==c && (a!=b || c!=b )) || (c==b && (c!=a || b!=a ))
){
    printf("TRIANGULO ISOSCELES\n");
}


    return 0;
}