#include<bits/stdc++.h>
using namespace std;
void uni (int ar[],int zz,int kl){
    int count=0;
    vector<int>v(ar,ar+zz);
    vector<int>::iterator it;
    it = unique(v.begin(),v.end());
    v.resize(distance(v.begin(),it));
   for(auto it = v.begin();it!=v.end();++it){
    count++;
   }

    cout<<dif<<endl;
}
int main(){
int n,k;
while((cin>>n>>k) && n !=0 && k !=0){
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int z= sizeof(a) / sizeof(a[0]);
    uni(a,z,k);

}



return 0;
}
