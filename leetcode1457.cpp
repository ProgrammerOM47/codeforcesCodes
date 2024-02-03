#include <bits/stdc++.h>
using namespace std;
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
int pseudoPalindromicPaths (TreeNode* root) {
    if(root==nullptr){
        return 0;
    }
    if(root->left==nullptr && root->right==nullptr){
        return 1;
    }
    int ans=0;
    if(root->left!=nullptr){
        root->left->val^=1;
        ans+=pseudoPalindromicPaths(root->left);
    }
    if(root->right!=nullptr){
        root->right->val^=1;
        ans+=pseudoPalindromicPaths(root->right);
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    TreeNode * root=new TreeNode(2);
    root->left=new TreeNode(3);
    root->right=new TreeNode(1);
    root->left->left=new TreeNode(3);
    root->left->right=new TreeNode(1);
    root->right->right=new TreeNode(1);
    cout<<pseudoPalindromicPaths(root)<<endl;

    return 0;
}