#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numTrees(int n) {
        int dp[n+1];
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            int total = 0;
            for(int j=1;j<=i;j++){
                int left = j-1;
                int right = i - j;
                total+=dp[left]*dp[right];
            }
            dp[i]=total;
        }
        return dp[n];
    }
};