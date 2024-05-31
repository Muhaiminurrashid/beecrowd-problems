#include<stdio.h>
#include<string.h>
void countLed(){
    char a[200];
    int i,led=0;
   scanf("%s",a);
    int l=strlen(a);
    for(i=0;i<l;i++){
        if (a[i]=='1') led+=2;
        if (a[i]=='4') led+=4;
        if (a[i]=='2' || a[i]=='3' || a[i]=='5') led+=5;
        if (a[i]=='7')led+=3;
        if (a[i]=='6' || a[i]=='9' || a[i]=='0')led+=6;
        if(a[i]=='8')led+=7;
    }
    printf("%d leds\n",led);
    

}
int main(){
    int n;
    
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        countLed();
    }



    return 0;
}