#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void fun(vector<int> nums,vector<int> &temp,vector<vector<int>> &res,int i){
        if(i>=nums.size()){
            res.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        fun(nums,temp,res,i+1);
        temp.pop_back();
        fun(nums,temp,res,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        fun(nums,temp,res,0);
        return res;
    }
};
class Solution {
public:
    void fun(vector<int> nums,vector<int> &temp,vector<vector<int>> &res,int i){
        res.push_back(temp);
        for(int k=i;k<nums.size();k++)
        {
            temp.push_back(nums[k]);
            fun(nums,temp,res,k+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        fun(nums,temp,res,0);
        return res;
    }
};