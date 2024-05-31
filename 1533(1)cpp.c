
#include<bits/stdc++.h>
using namespace std;
void secMax(int a[],int a_size){
sort(a,a + a_size,greater<int>());
for(int i=1;i<a_size;++i){
    if (a[i]!=a[0]){
        cout<<i+1<<endl;
        return ;
    }

}

}
int main(){
int n;
while((cin>>n) && n>0)
{
    int a[n];
    int z= size(a) /sizeof(a[o]);

    secmax(a,z);

        }

return 0;
}
