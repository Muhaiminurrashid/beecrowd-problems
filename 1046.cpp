#include<iostream>
using namespace std;
int main(){
int a,b,hours;
cin>>a>>b;
if (a>=b){
    hours = 24 - (a-b);
    cout<<"O JOGO DUROU "<<hours<<" HORA(S)"<<endl;
}
else{
    hours = -(a-b);
    cout<<"O JOGO DUROU "<<hours<<" HORA(S)"<<endl;

}
return 0;
}