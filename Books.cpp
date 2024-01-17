#include<bits/stdc++.h>
using namespace std;
#define int long long



int32_t main(){
    int n,t;
    cin>>n>>t;
    int time[n];
    for(int i=0;i<n;i++){
        cin>>time[i];
    }
    int Sum[n];
    Sum[0]=time[0];
    for(int i=1;i<n;i++){
        Sum[i]=Sum[i-1]+time[i];
        
    }
    int res = -1;
    for(int i=0;i<n;i++){
        int s = i, e = n - 1;
        int mid;
        while(s<=e){
            mid=(s+e)/2;
            int sum;
            if(i==0){
                sum=Sum[mid];

            }else{
                sum=Sum[mid]-Sum[i-1]; 
            }
            if(sum<=t){
                res=max(mid-i,res);
                s=mid+1;
            }else{
                e=mid-1;
            }
        }

    }

    cout<<(res+1)<<endl;

}
