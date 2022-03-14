#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {
        int n = arr.size();
        int dp[n];
        dp[0]=1;
        int res = 1;
        for(int i=1;i<n;i++)
        {
            dp[i]=1;
            for(int j=0;j<i;j++){
                if(arr[i]>arr[j] and dp[j]+1>dp[i])
                {
                    dp[i]=dp[j]+1;
                }
            }
            res = max(res,dp[i]);
        }
        return res;
    }
};