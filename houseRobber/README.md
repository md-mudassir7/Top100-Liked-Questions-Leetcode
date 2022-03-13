Approach

    1.Dynamic programming can be used here

    2.At any point the maximum cost of robbing will be the maximum of cost of robbing the previous house and the cost of robbing the current house

    3.i.e if we are at house i then dp[i]=max(dp[i-1],dp[i-2]+arr[i])

