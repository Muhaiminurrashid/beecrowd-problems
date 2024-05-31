#include<iostream>
using namespace std;
int main(){
int n,a;
cin>>n>>a;
if ((a%n==0) || (n%a==0)){
    cout<<"Sao Multiplos"<<endl;
}
else {
    cout<<"Nao sao Multiplos"<<endl;
}
return 0;
}