#include<bits/stdc++.h>
using namespace std;
int  expoo(int p){
    if(p==0)return 1;
    int ex7 = expoo (p / 2);
    if (p&1) return (7 * (ex7 *1LL* ex7) % 10) % 10;
    else return (ex7 * 1LL * ex7)% 10;
}
int main(){
    long long  t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<expoo(n)<<endl;
    }
}