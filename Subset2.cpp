#include<bits/stdc++.h>
using namespace std;
class Solution {
    vector<vector<int>>ans;
public:
    void Solve(vector<int>nums,int index,vector<int>&Current,int n){
        ans.push_back(Current);

        for(int i=index;i<n;i++){
            if(i!=index and nums[index]==nums[index-1]){
                continue;
            }
            Current.push_back(nums[index]);
            Solve(nums,index+1,Current,n);
            Current.pop_back();
            Solve(nums,index+1,Current,n);


            
        }

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return ans;
        }
        vector<int>Current;
        sort(nums.begin(),nums.end());
        Solve(nums,0,Current,n);
        return ans;
        
    }
};
int main(){
    Solution Obj;
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<vector<int>>ans=Obj.subsetsWithDup(nums);
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";

        }
        cout<<endl;
    }
}