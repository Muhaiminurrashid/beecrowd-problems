#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    while(cin>>a>>b>>c){
        if (a==b && b==c)cout<<"*"<<endl;
        else if (a!=b && b==c)cout<<"A"<<endl;
        else if (b==a && b!=c)cout<<"C"<<endl;
        else if (a==c && a!=b)cout<<"B"<<endl;
    }

}
