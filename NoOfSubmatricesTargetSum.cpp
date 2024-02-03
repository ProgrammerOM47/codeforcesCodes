#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        vector<vector<int>>prefix;
        int n=matrix.size(), m=matrix[0].size();
        for(int i=0; i<n; i++){
            vector<int>temp;
            for(int j=0; j<m; j++){
                if(j==0){
                    temp.push_back(matrix[i][j]);
                }
                else{
                    temp.push_back(temp[j-1]+matrix[i][j]);
                }
            }
            prefix.push_back(temp);
        }
        int ans=0;
        for(int i=0; i<m; i++){
            for(int j=i; j<m; j++){
                unordered_map<int,int>mp;
                mp[0]=1;
                int sum=0;
                for(int k=0; k<n; k++){
                    sum+=prefix[k][j]-(i>0?prefix[k][i-1]:0);
                    ans+=mp[sum-target];
                    mp[sum]++;
                }
            }
        }
        return ans;
        
        
    }
};


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    return 0;
}