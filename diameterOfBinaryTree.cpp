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
    pair<int,int> fun(TreeNode* root){
        if(root==NULL)
            return {0,0};
        pair<int,int> left = fun(root->left);
        pair<int,int> right = fun(root->right);
        pair<int,int> ans;
        int a = left.first;
        int b = right.first;
        int c = left.second+right.second;
        ans.first=max(a,max(b,c));
        ans.second = max(left.second,right.second)+1;
        return ans;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return fun(root).first;
    }
};