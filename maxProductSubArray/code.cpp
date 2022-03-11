#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = nums[0];
        int max_so_far = nums[0];
        int min_so_far = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0){
                swap(min_so_far,max_so_far);
            }
            max_so_far=max(max_so_far*nums[i],nums[i]);
            min_so_far=min(min_so_far*nums[i],nums[i]);
            res=max(res,max_so_far);
        }
        return res;
    }
};