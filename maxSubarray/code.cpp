#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int temp = 0;
        int res = 0;
        int nc = 0;
        int nmax = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                nc++;
                nmax=max(nmax,nums[i]);
            }
            temp+=nums[i];
            if(temp<0)
            {
                temp=0;
            }
            res=max(res,temp);
        }
        if(nc==nums.size())
            return nmax;
        return res;
    }
};