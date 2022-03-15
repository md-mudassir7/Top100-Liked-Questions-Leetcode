#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<=0)
                nums[i]=INT_MAX;
        }
        for(int i=0;i<n;i++){
            int index = abs(nums[i])-1;
            if(index>=0 && index<n && nums[index]>0)
            {
                nums[index]=-1*nums[index];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0)
                return i+1;
        }
        return n+1;
    }
};