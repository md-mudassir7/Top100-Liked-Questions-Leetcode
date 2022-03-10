#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.empty())
            return {};
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i=0;i<n;i++){
            if(nums[i]>0)
                break;
            if(i>0 && nums[i]==nums[i-1])
                continue;
            else
            {
                int left = i+1;
                int right = n-1;
                while(left<right){
                    int sum = nums[i]+nums[left]+nums[right];
                    if(sum<0)
                        left++;
                    else if(sum>0)
                        right--;
                    else if(sum==0)
                    {
                        res.push_back({nums[i],nums[left],nums[right]});
                        int pre_left = nums[left];
                        int pre_right = nums[right];
                        while(left<right && nums[left]==pre_left)
                            left++;
                        while(left<right && nums[right]==pre_right)
                            right--;
                    }
                }
            }
        }
        return res;
    }
};