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
    void fun(TreeNode* root,vector<vector<int>> &res,vector<int> temp,int sum){
        if(!root)
            return;
        sum-=root->val;
        temp.push_back(root->val);
        for(auto x : temp)
            cout<<x<<" ";
        cout<<endl;
        if(sum==0 && !root->left && !root->right)
        {
            res.push_back(temp);
        }
        fun(root->left,res,temp,sum);
        fun(root->right,res,temp,sum);
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        vector<int> temp;
        fun(root,res,temp,sum);
        return res;
    }
};