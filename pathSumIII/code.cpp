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
    int res = 0;
    void pathExists(TreeNode* root,int sum){
        if(!root)
            return ;
        sum-=root->val;
        if(sum==0)
        {
            res+=1;
        }
        pathExists(root->left,sum);
        pathExists(root->right,sum);
    }
    void fun(TreeNode* root,int sum){
        if(root){
            fun(root->left,sum);
            pathExists(root,sum);
            fun(root->right,sum);
        }
    }
    int pathSum(TreeNode* root, int sum) {
        
        fun(root,sum);
        return res;
    }
};