#include<iostream>
using namespace std;
int main(){
int h1,h2,m1,m2,diff,first,second,hr,min;
cin>>h1>>m1>>h2>>m2;
diff = (h2 * 60 + m2) - (h1 * 60 + m1);
if (diff <= 0){
    diff+= 24*60;

}
hr = diff / 60;
min = diff % 60;
cout<<"O JOGO DUROU "<<hr<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl;

return 0;
}