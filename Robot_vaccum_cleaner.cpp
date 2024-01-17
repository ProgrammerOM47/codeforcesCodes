#include<bits/stdc++.h>
using namespace std;
#define int long long
int Noise(string &s){
    int ans=0;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='s'){
            count++;
        }else{
            ans+=count;
        }

    }return ans;
}
bool cmp(string &x,string &y){
    string s=x+y;
    string t=y+x;
    if(Noise(s)>Noise(t)){
        return true;
    }
    return false;
}
int32_t main(){
    int n;
    cin>>n;
    vector<string>v;

    //sort STL : 1 2 4 5 7
    while(n--){
        string s;
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),cmp);
    string st;
    for(int i=0;i<v.size();i++){
        st+=v[i];
    }
    cout<<Noise(st)<<endl;
}