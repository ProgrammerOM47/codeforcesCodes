#include<bits/stdc++.h>
using namespace std;




int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        int a[n];
        int p[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            
        }
        sort(a,a+n);
        p[0]=a[0];
        for(int i=1;i<n;i++){
            p[i]=a[i]+p[i-1];
        }
        
    }
}
