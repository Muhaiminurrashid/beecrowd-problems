#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin.tie(0);
    while(cin>>n && n>0){
         int total_sq=0;
        total_sq= ((n*1LL*(n+1)*(2*n+1)) / 6);
        cout<<total_sq<<endl;
    }
}