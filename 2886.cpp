#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    vector<char>v;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if (s[i]>= 'a' && s[i] <= 'z'){
                char a=s[i];
                v.push_back(a);
        }
    }
    reverse(v.begin(),v.end());
    for(auto it : v){
        cout<<it;
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
}