#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool find(vector<int> nums,int target){
        int l = 0;
        int r = nums.size()-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]==target)
                return true;
            else if(nums[mid]<target){
                l=mid+1;
            }
            else
                r=mid-1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix[0].size();
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0]==target or matrix[i][m-1]==target)
                return true;
            if(matrix[i][0]<=target and matrix[i][m-1]>=target)
                return find(matrix[i],target);
        }
        return false;
    }
};