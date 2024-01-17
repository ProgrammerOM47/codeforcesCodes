#include<bits/stdc++.h>
using namespace std;

int Solve(){
    int n;
    cin>>n;
    int count=0;
    string s;
    cin>>s;
    stack<char>stk;
    for(int i=0;i<n;i++){
        if(!stk.empty()){
            if(stk.top()!=s[i]){
                stk.pop();

            }
            else if(stk.top()!=s[i]){
                stk.pop();

            }else{
                stk.push(s[i]);
            }
        }else{
            stk.push(s[i]);
        }
        
    }
    while(!stk.empty()){
        count++;
        stk.pop();
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        cout<<Solve()<<endl;
    }
}