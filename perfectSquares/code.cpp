#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSquares(int n) {
        int dp[n+1];
        if(n==0 or n==1)
            return n;
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=i;
            for(int j=1;j*j<=i;j++){
                dp[i]=min(dp[i],1+dp[i-j*j]);
            }
        }
        return dp[n];
    }
};