#include<bits/stdc++.h>
using namespace std;
void solve (){
    int x=-1;
    string a,b;
    cin>>a>>b;
    long long lena=a.length();
    long long lenb=b.length();
    if (lena<lenb){
        cout<<"nao encaixa"<<endl;
        }
        else {
    for (long long i=lena-1,j=lenb-1;j>=0;--i,--j){
        if (b[j]==a[i]){
            x=1;
        }else {x=0;break;}
    }
    if (x==1)cout<<"encaixa"<<endl;
    else cout<<"nao encaixa"<<endl;
        }
}
int main(){
    long long n;
cin>>n;
while(n--){
    solve();
}

    return 0;
}