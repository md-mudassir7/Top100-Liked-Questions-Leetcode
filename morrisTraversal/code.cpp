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
    void buildTree(TreeNode* root) {
        TreeNode* curr = root;
        while(curr!=NULL){
            if(!curr->left)
            {
                cout<<curr->val<<" ";
                curr = curr->right;
            }
            else
            {
                TreeNode* pre = curr->left;
                while(pre->right)
                {
                    pre = pre->right;
                }
                if(pre->right==NULL){
                    pre->right = curr;
                    curr = curr->left;
                }
                else
                {
                    pre->right=NULL;
                    cout<<curr->val<<" ";
                    curr = curr->right;
                }
            }
        }
    }
};