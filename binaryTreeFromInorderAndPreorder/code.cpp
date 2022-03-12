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
    TreeNode* solve(vector<int>& pre,int start,int end,unordered_map<int,int> &mp,int &index){
        if(start>end)
            return NULL;
        TreeNode* root=new TreeNode(pre[index]);
        int currIndex = mp[pre[index]];
        index++;
        root->left = solve(pre,start,currIndex-1,mp,index);
        root->right = solve(pre,currIndex+1,end,mp,index);
        return root;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int n = in.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
            mp[in[i]]=i;
        int i = 0;
        return solve(pre,0,n-1,mp,i);
    }
};