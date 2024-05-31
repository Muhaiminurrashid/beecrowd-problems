#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double code , quantity;
cin>>code>>quantity;

if (code == 1){
    cout<<"Total: R$ "<<fixed<<setprecision(2)<<(quantity*4.00)<<endl;
}


else if (code == 2){
    cout<<"Total: R$ "<<fixed<<setprecision(2)<<(quantity*4.50)<<endl;
}


else if (code == 3){
    cout<<"Total: R$ "<<fixed<<setprecision(2)<<(quantity*5.00)<<endl;
}


else if (code == 4){
    cout<<"Total: R$ "<<fixed<<setprecision(2)<<(quantity*2.00)<<endl;
}


else if (code == 5){
    cout<<"Total: R$ "<<fixed<<setprecision(2)<<(quantity*1.50)<<endl;
}
return 0;
}