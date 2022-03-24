#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
	int minDifference(int arr[], int n)  { 
	    int m = 0;
	    for(int i = 0;i<n;i++)
	        m+=arr[i];
	    int dp[n+1][m+1];
	    for(int i=0;i<=m;i++)
	        dp[0][i]=0;
	    for(int i=0;i<=n;i++)
	        dp[i][0]=1;
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=m;j++){
	            if(arr[i-1]<=j)
	                dp[i][j] = dp[i-1][j] or dp[i-1][j-arr[i-1]];
	            else 
	                dp[i][j] = dp[i-1][j];
	        }
	    }
	    int ans = INT_MAX;
	    for(int i = m/2;i>=0;i--){
	        if(dp[n][i]==1)
	            ans = min(ans,m-2*i);
	    }
	    return ans;
	} 
};