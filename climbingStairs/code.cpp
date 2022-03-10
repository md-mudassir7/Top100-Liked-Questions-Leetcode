#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
            return 1;
        int dp[n+1];
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++)
            dp[i]=dp[i-1]+dp[i-2];
        return dp[n];
    }
};
class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        int a=1,b=2;
        int c;
        for(int i=2;i<n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
};