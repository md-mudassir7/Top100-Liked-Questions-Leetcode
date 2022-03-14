Approach

    1.Dynammic programming is used 
    
    2.Here, we use dp array where dp[i] denotes the LIS ending at index i. We can always pick a single element and hence all dp[i] will be initialized to 1.

    3.For each element arr[i], if there's a smaller element arr[j] before it, the result will be maximum of current LIS length ending at i(dp[i]), 
    
    and LIS ending at that j + 1(dp[j] + 1). we are adding +1 because we are including the current element and extending the LIS ending at j.