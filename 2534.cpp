#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m; //size of 
while(cin>>n>>m){

int a[n],b[m];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n,greater<int>());
for(int j=0;j<m;j++){
    cin>>b[j];
    cout<<a[b[j]-1]<<endl;
}
}
    return 0;
}