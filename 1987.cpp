#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,m,digit,sum;
while(cin>>n>>m){
    sum=0;
    while(m!=0){
        digit = m % 10;
        sum+=digit;
        m/=10;
    }
    if (sum % 3 == 0)cout<<sum<<" sim"<<endl;
    else cout<<sum<<" nao"<<endl;

}
    return 0;
}