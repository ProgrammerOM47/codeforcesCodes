#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,h,l,r;
int a[100005];
int Sleeping_Schedule(int i,int Waking_Hour){
    if(i==n){
        //Maine saari Sleep karli hain
        return 0;
    }

    int Op1_Waking_Hour=(Waking_Hour+a[i])%h;
    int Op2_Waking_Hour=(Waking_Hour+a[i]-1)%h;
    //Main ai hour ke baad sone gya hu.
    int ans1=0,ans2=0;
    if(Op1_Waking_Hour>=l and Op1_Waking_Hour<=r){
        ans1=1;
    }
    if(Op2_Waking_Hour>=l and Op2_Waking_Hour<=r){
        ans2=1;
    }
    int op1=Sleeping_Schedule(i+1,Op1_Waking_Hour)+ans1;

    //Main ai-1 hour ke baad sone jaa rha hu
    int op2=Sleeping_Schedule(i+1,Op2_Waking_Hour)+ans2;

    return max(op1,op2);

}

int32_t main(){
    cin >> n >> h >> l >> r;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << Sleeping_Schedule(0,0) << endl;
}
