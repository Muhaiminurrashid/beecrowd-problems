#include<iostream>
#include<iomanip>
//#include<math.h>
using namespace std;
int main(){
double pi=3.14159;
double r,v;
cin>>r;
//v = ((4.0/3.0) * pi * (pow (3 , r)));
v = ((4/3.0) * pi * r * r * r);
cout<<"VOLUME = "<<fixed<<setprecision(3)<<v<<endl; 
return 0;
}
