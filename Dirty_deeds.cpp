#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int>f;
vector<int>s;

bool compare1(int &x,int &y){
    if(s[x]>s[y])return true;
    else{
        return false;
    }
}

bool compare2(int &x,int &y){
    if(f[x]<f[y])return true;
    else{
        return false;
    }
}

int32_t main(){
    int n;
    cin>>n;
    vector<int>s1,s2;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        f.push_back(x);
        s.push_back(y);
        if(f[i]<s[i]){
            s1.push_back(i);
        }
        else{
            s2.push_back(i);
        }
    }
    if(s1.size()>s2.size()){
        sort(s1.begin(),s2.end(),compare1);
        ans=s1;
    }else{
        sort(s2.begin(),s2.end(),compare2);
        ans=s2;
    }

    for (auto x : ans)
    {
        cout << x+1 <<" ";
    }
    

}
