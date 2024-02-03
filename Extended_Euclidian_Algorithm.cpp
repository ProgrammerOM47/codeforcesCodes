#include <bits/stdc++.h>
using namespace std;

int Euclid(int a,int b){
    if(b==0){
        return a;
    }
    return Euclid(b,a%b);
}
//We have a Equation of the form :ax+by=gcd(a,b);
vector<int> Extended_Euclid(int a,int b){
    if(b==0){
        vector<int> ans;
        ans.push_back(1);
        ans.push_back(0);
        ans.push_back(a);
        return ans;
    }
    vector<int> small_ans=Extended_Euclid(b,a%b);
    vector<int> ans;
    ans.push_back(small_ans[1]);
    ans.push_back(small_ans[0]-(a/b)*small_ans[1]);
    ans.push_back(small_ans[2]);
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    vector<int> ans=Extended_Euclid(a,b);
    cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
    cout<<Euclid(a,b)<<endl;
    return 0;
}