#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%2==1){
        cout<<"No"<<endl;
        return 0;
    }
    sum=(sum/2);
    int left_sum=0;
    for(int i=0;i<n;i++){
        left_sum+=a[i];
        mp[a[i]]++;
        if(mp[left_sum-sum]){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    int right_sum=0;
    mp.clear();
    for(int i=n-1;i>=0;i--){
        mp[a[i]]++;
        if(mp[right_sum-sum]){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}