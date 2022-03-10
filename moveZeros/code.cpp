#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0;
        int r =0;
        while(r<nums.size()){
            if(nums[r]==0)
                r++;
            else
            {
                swap(nums[r],nums[l]);
                l++;
                r++;
            }
        }
    }
};