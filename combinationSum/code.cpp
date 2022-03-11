#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void fun(vector<int>& nums,int i,vector<int> curr,vector<vector<int>> &res,int target,int n){
        if(target==0)
        {
            res.push_back(curr);
            return;
        }
        if(target<0 or i == n)
            return;
        fun(nums,i+1,curr,res,target,n);
        int currVal = nums[i];
        curr.push_back(currVal);
        fun(nums,i,curr,res,target-currVal,n);
        curr.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        int n = candidates.size();
        fun(candidates,0,{},res,target,n);
        return res;
    }
};