#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximalSquare(vector<vector<char>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        int dp[m+1][n+1];
        int largest = 0;
        for(int i=0;i<m;i++)
            dp[i][0]=0;
        for(int i=0;i<n;i++)
            dp[0][i]=0;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++)
            {
                if(arr[i-1][j-1]=='1')
                {
                    dp[i][j]=1+min(min(dp[i-1][j],dp[i-1][j-1]),dp[i][j-1]);
                }
                else
                    dp[i][j]=0;
                cout<<dp[i][j]<<" ";
                largest = max(largest,dp[i][j]);
            }
            cout<<endl;
        }
        return largest*largest;
    }
};