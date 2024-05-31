#include<stdio.h>
int main(){
double n1,n2,n3,n4,avg,e,e1;
scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
avg = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1)/10;
printf("Media: %.1lf\n",avg);
if (avg>=7.0){
    printf("Aluno aprovado.\n");
}
else if (avg >=5.0){
    printf("Aluno em exame.\n");
    scanf("%lf",&e);
    printf("Nota do exame: %.1lf\n",e);
    
    if (e + avg/2.0>5.0){
        printf("Aluno aprovado.\n");
    }
    else {
          printf("Aluno reprovado.\n");
    
    }
    printf("Media final: %.1f\n",(e+avg)/2.0);
}
else {
    printf("Aluno reprovado.\n");
}
return 0;
}