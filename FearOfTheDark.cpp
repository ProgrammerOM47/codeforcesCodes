#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(t--){
        int px,py,ax,ay,bx,by;
        cin>>px>>py>>ax>>ay>>bx>>by;
        double a=sqrt(abs(px-ax)**2+abs(py-ay)**2);
        double c=sqrt(abs(bx-ax)**2+abs(by-ay)**2);
        double b=sqrt(abs(px-bx)**2+abs(py-by)**2);

        int res=min(
            max(a,b)+
            max(b,c)+
            max(a,c)
        )
    }
}