#include<bits/stdc++.h>
using namespace std;


// #define long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>freq(26,0);
        int mx=0;
        for(auto x:s){
            freq[x-'a']++;
            mx=max(freq[x-'a'],mx);
        }
        int ans=max((2*mx)-n,n%2);
        cout<<ans<<endl;
    }

    

}
