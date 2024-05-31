#include<iostream>
#include<iomanip>
using namespace std;
int main(){
string name;
double money,sells,total;
cin>>name>>money>>sells;
total= (money + (0.15 * sells));
cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<total<<endl;
return 0;
}