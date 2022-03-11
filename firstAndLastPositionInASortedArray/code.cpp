#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int first(vector<int> &nums,int target){
        int res = -1;
        int l = 0;
        int r = nums.size()-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]==target){
                res = mid;
                r=mid-1;
            }
            else if(nums[mid]<target)
                l=mid+1;
            else
                r=mid-1;
        }
        return res;
    }
    int last(vector<int> &nums,int target){
        int res = -1;
        int l = 0;
        int r = nums.size()-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]==target){
                res = mid;
                l=mid+1;
            }
            else if(nums[mid]<target)
                l=mid+1;
            else
                r=mid-1;
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {first(nums,target),last(nums,target)};
    }
};