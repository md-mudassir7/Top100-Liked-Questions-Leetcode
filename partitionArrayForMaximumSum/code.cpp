#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n+1,0);         // intialize dp elements to 0;
        for(int i=1;i<=n;i++)
        {
            int max_ele = INT_MIN, max_sum = INT_MIN;      
            for(int j=1;j<=k && i-j>=0; j++)
            {
                max_ele = max(max_ele,arr[i-j]);             // max_ele  = maximum element till now in k indexes.
                max_sum = max(max_sum, dp[i-j]+max_ele*j);   // max_sum = maximum sum till now by replacing array elements with max_ele
            }
            dp[i] = max_sum;
        }
        return dp[n];
    }
};