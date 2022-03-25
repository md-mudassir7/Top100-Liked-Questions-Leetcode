Approach

    1.For every coin we have 2 choices one to include and other to exclude

    2.If we include it we can include it again since its given that there is unlimited supply of coins

    3.Hence our goal is to find the minimum of both values (include and exclude)

    4.If there are 0 coins and some positive amount we need infinite coins to make up that amount hence the first row is infinite

    5.If the amount is zero then we obviously need 0 coins to make up the sum hence the first column is zero

    6.If we include the coin we increase the count by one(1+dp[i][j-coins[i-1]]) we are not doing i-1 because we need it again in the future
    
    7.If we do not include the coin we dont increase anything (dp[i-1][j])