#include<iostream>
#include<iomanip>
using namespace std;
int main(){

double NUMBER,hours,pph,SALARY;
cin>>NUMBER;
cin>>hours;
cin>>pph;
SALARY = pph * hours;
cout<<"NUMBER = "<<NUMBER<<endl;
cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<SALARY<<endl;


    return 0;
}