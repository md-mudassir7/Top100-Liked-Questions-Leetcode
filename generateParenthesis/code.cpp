#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void helper(int left,int right,string curr,vector<string> &ans,int n){
        if(left+right>2*n)
            return;
        if(left<right)
            return;
        if(left==right and left+right==2*n)
        {
            ans.push_back(curr);
        }
        helper(left+1,right,curr+"(",ans,n);
        helper(left,right+1,curr+")",ans,n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        helper(0,0,"",ans,n);
        return ans;
    }
};