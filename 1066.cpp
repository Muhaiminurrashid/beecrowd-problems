#include<iostream>
using namespace std;
int main(){

int n;
int p=0;
int even=0;
int odd=0;
int neg=0;
for (int i=1;i<=5;i++){
    cin>>n;
    if (n>0){
        p++;
    }
    if (n<0){
        neg++;
    }
    if(n%2==0){
        even++;
    }
    if (n%2!=0){
        odd++;
    }
}
cout<<even<<" valor(es) par(es)"<<endl;
cout<<odd<<" valor(es) impar(es)"<<endl;
cout<<p<<" valor(es) positivo(s)"<<endl;
cout<<neg<<" valor(es) negativo(s)"<<endl;
return 0;
}