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
    void flatten(TreeNode* root) {
        if(root==NULL){
            return;
        }
        TreeNode* curr = root;
        while(curr!=NULL){
            if(curr->left){
                TreeNode* pre = curr->left;
                while(pre->right){
                    pre=pre->right;
                }
                pre->right=curr->right;
                curr->right=curr->left;
            }
            curr=curr->right;
        }
        curr=root;
        while(curr->right){
            curr->left=NULL;
            curr=curr->right;
        }
    }
};