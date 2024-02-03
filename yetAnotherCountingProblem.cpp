#include <bits/stdc++.h>
using namespace std;

#define int long long
int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,q;
        cin>>a>>b>>q;
        //Combine is the array which will tell us whether the number is divisible by a and b or not
        int combine[40005]={0};
        int prefix[40005]={0};

        for(int i=1;i<=40000;i++){
            if((i%a)%b!=((i%b)%a)){
                combine[i]=1;
            }
            if(i==0){
                prefix[i]=combine[i];
            }
            else{
                prefix[i]=prefix[i-1]+combine[i];
            }
        }
        int count1=0;
        int count2=0;
        while(q--){
            int l,r;
            cin>>l>>r;
            l--;
            //This Gives u 0-r tak ke x
            int x=r/(a*b);
            int y=r%(a*b);
            count1=(x*prefix[a*b-1])+prefix[y];
            //This Gives u 0-(l-1) tak ke x
            int x1=l/(a*b);
            int y1=l%(a*b);
            count2=((x1*prefix[a*b-1])+prefix[y1]);
            cout<<count1-count2<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}