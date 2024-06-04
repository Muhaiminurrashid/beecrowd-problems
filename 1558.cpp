#include<bits/stdc++.h>
using namespace std;
int main(){
    long n,y,x;
    bool ans=false;
    unsigned s;
    cin.tie(0);
    while(cin>>n){
        
		x = 0;
		y = sqrt(n);
		ans = false;
	
		while (y >= x)
		{
			
			s = x * x + y * y;
			if (s == n)
			{

				ans = true;
				break;

			}
			else if (s  <  n)
				++x;
			else
				--y;

		}
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}