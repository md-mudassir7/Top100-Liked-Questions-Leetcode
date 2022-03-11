#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,0);
        dp[0]=true;
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(dp[j] && j+nums[j]>=i)
                {
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[n-1];
    }
};
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int lastGood = nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(i+nums[i]>=lastGood)
                lastGood = i;
        }
        return lastGood == 0;
    }
};