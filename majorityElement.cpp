#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans ;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(count==0)
            {
                count = 1;
                ans = nums[i];
            }
            else if(nums[i]==ans)
                count++;
            else
            {
                count--;
            }
        }
        return ans;
    }
};