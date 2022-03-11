#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void fun(vector<vector<int>>&res,vector<int> nums,int i){
        if(i>=nums.size()){
            res.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[j],nums[i]);
            fun(res,nums,i+1);
            swap(nums[j],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        fun(res,nums,0);
        return res;
    }
};