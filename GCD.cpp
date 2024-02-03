#include <bits/stdc++.h>
using namespace std;
int Brute_Force(int a,int b){
    int ans=0;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 and b%i==0){
            ans=i;
        }
    }
    return ans;

}
int Optimised_Approach(int a,int b){
    if(b==0){
        return a;
    }
    return Optimised_Approach(b,a%b);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int a,b;
    cin>>a>>b;

    cout<<Brute_Force(a,b)<<endl;
    cout<<Optimised_Approach(a,b)<<endl;

    //Time Complexity: O(log(n))
    cout<<__gcd(a,b)<<endl;
    return 0;

}