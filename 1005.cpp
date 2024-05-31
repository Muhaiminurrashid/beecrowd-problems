#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double x,y,MEDIA=0;
cin>>x;
cin>>y;
x = x * 3.5;
y = y * 7.5;

MEDIA = ((x + y) / (3.5 + 7.5));
cout<<"MEDIA = "<< fixed << setprecision(5) << MEDIA<<endl;


  return 0;
}