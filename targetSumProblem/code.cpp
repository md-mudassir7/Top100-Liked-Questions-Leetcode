#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int m = 0;
        for(auto x: nums)
            m+=x;
        m+=target;
        if(m&1)
            return 0;
        m/=2;
        m = abs(m);
        int dp[n+1][m+1];
        for(int i=0;i<=m;i++)
            dp[0][i]=0;
        for(int i=0;i<=n;i++)
            dp[i][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=m;j++)
            {
                if(nums[i-1]<=j)
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-nums[i-1]];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][m];
    }
};