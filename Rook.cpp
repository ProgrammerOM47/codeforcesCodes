#include<bits/stdc++.h>
using namespace std;
void Solve(){
    char ch;int x;
    cin>>ch>>x;

    //Row par Iterate kar lete hai
    for(int i=1;i<=8;i++){
        if(i!=x){
            cout<<ch<<i<<endl;
        }
    }
    //Col par iterate kar lete hai
    for(char i='a';i<='h';i++){
        if(i!=ch){
            cout<<i<<x<<endl;
        }
    }


}

int main(){
    int t;
    cin>>t;
    while(t--){
        Solve();
    }
}
