#include <bits/stdc++.h>
using namespace std;
/*
    N is the size of the nums and remoainder array
    Print the smallest x that satiusfies the system of Linear congruences
    x%nums[0]=remainder[0]
    x%nums[1]=remainder[1]
    ...Process goes on
    GCD of Evry pair of nums[i] is 1

*/
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
int modInverse(int a, int m)
{
    vector<int> ans=Extended_Euclid(a,m);
    int x=ans[0];
    int gcd=ans[2];
    if(gcd!=1){
        return -1;
    }
    int ans1=(x%m+m)%m;
    return ans1;
}
//Formula for x is: Summation (PP[i]*Inv[i]*Rem[i]);
int X(int nums[],int remainder[],int N){
    int PRoduct=1;
    for(int i=0;i<N;i++){
        PRoduct*=nums[i];
    }
    int ans=0;
    for(int i=0;i<N;i++){
        int PP=PRoduct/nums[i];
        int Inv=modInverse(PP,nums[i]);
        ans+=PP*Inv*remainder[i];
    }
    return ans%PRoduct;

}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin>>n; 
    int nums[n];
    int remainder[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        cin>>remainder[i];
    }
    cout<<X(nums,remainder,n)<<endl;

    return 0;
}