#include<stdio.h>
int main(){

double salary,newSalary,add;
scanf("%lf",&salary);
if (salary<=400){
    newSalary = salary +(salary*.15);
    printf("Novo salario: %.2lf\n",newSalary);
    add = newSalary -salary;
    printf("Reajuste ganho: %.2lf\n",add);
    printf("Em percentual: 15 %\n");
}
else if (salary>400 && salary <=800){
    newSalary = salary +(salary*.12);
    printf("Novo salario: %.2lf\n",newSalary);
    add = newSalary -salary;
    printf("Reajuste ganho: %.2lf\n",add);
    printf("Em percentual: 12 %\n");
}
else if (salary>800 && salary<=1200){
    newSalary = salary +(salary*.10);
    printf("Novo salario: %.2lf\n",newSalary);
    add = newSalary -salary;
    printf("Reajuste ganho: %.2lf\n",add);
    printf("Em percentual: 10 %\n");
}

else if (salary>1200 && salary <=2000){
    newSalary = salary +(salary*.07);
    printf("Novo salario: %.2lf\n",newSalary);
    add = newSalary -salary;
    printf("Reajuste ganho: %.2lf\n",add);
    printf("Em percentual: 7 %\n");
}
else if (salary>2000){
    newSalary = salary +(salary*.04);
    printf("Novo salario: %.2lf\n",newSalary);
    add = newSalary -salary;
    printf("Reajuste ganho: %.2lf\n",add);
    printf("Em percentual: 4 %\n");
}
return 0;
}