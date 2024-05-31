
#include<bits/stdc++.h>
using namespace std;
void secMax(int a[],int a_size){
    int index=-1;
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
while(1)
{
    cin>>n;
    if(n==0)break;
    int a[n];
    int z= sizeof(a) /sizeof(a[0]);
    for(int i=0;i<z;i++){
        cin>>a[i];
    }


    secMax(a,z);

        }

return 0;
}

