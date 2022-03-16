#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    int solve(TreeNode* root,int &res){
        if(!root)
            return 0;
        int lmax = solve(root->left,res);
        int rmax = solve(root->right,res);
        int temp = max(max(lmax,rmax)+root->val,root->val);
        int ans = max(temp,lmax+rmax+root->val);
        res = max(res,ans);
        return temp;
    }
    int maxPathSum(TreeNode* root) {
        if(!root)
            return 0;
        int res = root->val;
        solve(root,res);
        return res;
    }
};