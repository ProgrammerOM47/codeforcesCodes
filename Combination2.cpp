#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<vector<int>>ans;
public:
    void Solve(vector<int>&current,int index,int sum,vector<int>&a,int target){
        if(sum==target){
            ans.push_back(current);
            return;
        }else if(sum>target){
            return;

        }
        for(int i=index;i<a.size();i++){
            if(i!=index and a[i]==a[i-1]){
                continue;
            }
            current.push_back(a[i]);
            sum+=a[i];
            Solve(current,i+1,sum,a,target);
            //backtracking
            sum-=a[i];
            current.pop_back();

        }

    }
    vector<vector<int>> combinationSum2(vector<int>& a, int target) {
        vector<int>current;
        int sum=0;
        sort(a.begin(),a.end());
        int n=a.size();
        Solve(current,0,sum,a,target);
        return ans;
    }
};
int main(){
    Solution Obj;
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<vector<int>>ans=Obj.combinationSum2(nums,target);
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";

        }
        cout<<endl;
    }
}