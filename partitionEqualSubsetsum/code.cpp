#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int m = 0;
        for(int i=0;i<n;i++)
            m+=nums[i];
        if(m&1)
            return false;
        m/=2;
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 and j==0)
                    dp[i][j]=1;
                else if(i==0 or j==0)
                    dp[i][j]=0;
                else if(nums[i-1]<=j)
                    dp[i][j]=dp[i-1][j] or dp[i-1][j-nums[i-1]];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][m];
    }
};