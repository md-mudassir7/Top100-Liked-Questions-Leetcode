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
        if(root==NULL){
            return {0,0}; //base case
        }
        pair<int,int> left = fun(root->left);   //ans from left subtree
        pair<int,int> right = fun(root->right);  //ans from right subtree
        pair<int,int> currAns;  //ans of the current node
        currAns.first = root->val+left.second+right.second; //first value is the when we include the current node
        currAns.second = max(left.first,left.second)+max(right.first,right.second); //second is when we do not include current node, 
		//which can  be max of any value in the left and right pairs
        return currAns;
    }
    int rob(TreeNode* root) {
        pair<int,int> ans = fun(root);
        return max(ans.first,ans.second);
    }
};