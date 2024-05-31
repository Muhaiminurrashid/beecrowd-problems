#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long out=0,in=0;
    string n;
   cin>>n;
    for (int i=0;i<n.length();i++){
        if (n[i]=='<')in++;
        else if (n[i]=='>'){
            if (in>0){
           out++;
           in--;
            }
        }
    }
   cout<<out<<endl;
}
int main(){
    int t;
    cin>>t;
    cin.ignore(); 
    while(t--){
    solve();
  }
}