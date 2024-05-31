#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double code1,code2,num1,num2,p1,p2,paid;
cin>>code1>>num1>>p1>>code2>>num2>>p2;
paid = ((num1 * p1) + (num2 * p2));
cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<paid<<endl;
return 0;
}