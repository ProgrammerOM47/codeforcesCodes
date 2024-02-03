#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countPaths(int m, int n, int maxMove, int startRow, int startColumn, int dp[50][50], int &ans){
        if(startRow<0 || startRow>=m || startColumn<0 || startColumn>=n){
            return 1;
        }
        if(maxMove==0){
            return 0;
        }
        if(dp[startRow][startColumn]!=0){
            return dp[startRow][startColumn];
        }
        int left=countPaths(m,n,maxMove-1,startRow,startColumn-1,dp,ans);
        int right=countPaths(m,n,maxMove-1,startRow,startColumn+1,dp,ans);
        int up=countPaths(m,n,maxMove-1,startRow-1,startColumn,dp,ans);
        int down=countPaths(m,n,maxMove-1,startRow+1,startColumn,dp,ans);
        dp[startRow][startColumn]=((left+right)%1000000007+(up+down)%1000000007)%1000000007;
        return dp[startRow][startColumn];
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        int dp[50][50]={0};
        int ans=0;
        return countPaths(m,n,maxMove,startRow,startColumn,dp,ans);
    }
};
/*2
3
8
1
0
*/
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    Solution sol;
    cout<<sol.findPaths(2,3,8,1,0)<<endl;
    return 0;
}