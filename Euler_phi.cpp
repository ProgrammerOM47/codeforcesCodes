#include <bits/stdc++.h>
using namespace std;
const int N=1e3;
void calculate_Totient(){
    vector<bool>pr(N,true);
    vector<int>tot(N);
    for(int i=2;i<N;i++){
        for(int j=i*i;j<N;j+=i){
            pr[j]=false;
        }
    }
    iota(tot.begin(),tot.end(),0);
    for(int i=2;i<N;i++){
        if(pr[i]){
            for(int j=i;j<N;j+=i){
                tot[j]/=i;
                tot[j]*=(i-1);
            }
        }
    }
    for(int i=1;i<10;i++){
        cout<<i<<" "<<tot[i]<<endl;
    }
    
}

int Euler_phi(int n){
    int ans=n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            ans-=ans/i;
        }
    }
    if(n>1){
        ans-=ans/n;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    // int n;
    // cin>>n;
    // cout<<Euler_phi(n)<<endl;
    calculate_Totient();
    return 0;
}
