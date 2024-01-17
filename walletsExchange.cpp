#include<bits/stdc++.h>
using namespace std;

void Solve(){
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"Bob"<<endl;
        return;
    }
    if(a>b){
        if((a-b)%2==0){
            cout<<"Bob"<<endl;
            return;
        }
        if((a-b)%2==1){
            cout<<"Alice"<<endl;
            return;
        }

    }
    if(b>a){
        if((b-a)%2==1){
            cout<<"Alice"<<endl;
            return;
        }
        if((b-a)%2==0){
            cout<<"Bob"<<endl;
            return;
        }

    }
   
}

int main(){
    int t;
    cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}
