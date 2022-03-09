#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        if(target<nums[0])
            return 0;
        if(target>nums[n-1])
            return n;
        int l = 0;
        int h = nums.size()-1;
        while(l<=h){
            int mid = l +(h-l)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                l=mid+1;
            else
                h=mid-1;
        }
        return h+1;
    }
};