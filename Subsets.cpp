#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<vector<int>>ans;
    void Solve(vector<int>nums,int index,vector<int>Current,int n){
        if(index==n){
            ans.push_back(Current);
            return;
        }

        //Exclude
        Solve(nums,index+1,Current,n);
        //INClude
        Current.push_back(nums[index]);
        Solve(nums,index+1,Current,n);
        //Current.pop_back() for backtracking method in which we first include then exclude
    }
public:
    vector<vector<int>> subsets(vector<int>& nums){
        int n=nums.size();
        vector<int>Current;
        Solve(nums,0,Current,n);
        return ans;

        
        
    }
};
// Solve(Index):
// Solve(nums,0,Current,n);
int main(){
    Solution Obj;
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<vector<int>>ans=Obj.subsets(nums);
    for(auto x:ans){
        for(auto y:ans){

        }
    }
}