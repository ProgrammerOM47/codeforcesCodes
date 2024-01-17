#include<bits/stdc++.h>
using namespace std;
#define int long long
#define TT 1e18
void Solve(){
    int n;
    cin>>n;

    //this will contain all my potential teams that will play n matches in ascending order
    set<int>st;
    //this is for D we are putting D as i through this loop.
    for(int i=0;i<63;i++){
        int c=pow(2,i)-1;
        //we are defining the range for m.
        int s=0,e=1e10;
        //Edge case for less computation
        if(n==c){
            //this means the total number of matches is equal to c.
            //you don't have to check for m as I know the answer
            //m can be one only.
            st.insert(c+1);
            continue;
        }
        while (s <= e){
            int equation=0;
            int mid=(s+e)/2;
            equation=mid;equation*=(mid-1);equation/=2;
            int extra=c;
            //this gives u total number of matches
            if(extra!=0 && mid>(TT/extra)){
                equation=TT;
            }else{
                equation=extra*mid+equation;
            }
            if(equation==n){
                if(mid%2==1){
                    st.insert((extra+1)*mid);
                }
                break;
            }
            if(equation>n){
                e=mid-1;
            }
            if(equation<n){
                s=mid+1;
            }
        }
        
    }
    if (st.size() == 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        for (auto x : st)
        {
            cout << x << endl;
        }
    }
}
int32_t main(){
    //No of Matches
    Solve();
}