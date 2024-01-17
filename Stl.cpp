#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5};
    vector<int>p=v;

    map<int,int>mp;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    for(auto it=v.begin();it!=v.end();it++){
        cout<<(*it)<<endl;

    }
    cout<<endl;
    for(auto x:v){
        cout<<x<<endl;
    }
    for(int i=0;i<5;i++){
        mp.insert({i,i+1});
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;
    for(pair<int,int> x:mp){
        cout<<x.first<<" "<<x.second<<endl;
    }



}