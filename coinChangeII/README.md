Approach

    1.Create a dp table to store the number of ways we can make a certain amount using given coins 

    2.Base case1: if amount is greater than zero and we don't have any coins then we can't make that amount so we return zero, therefore intialize all values of first column as zero

    3.Base case2: if the amount itself is zero then there is only one way to make amount zero so initialize first row as 1

    4.Now we fill the table in bootom-up fashion, i.e we try t make each value from 1 to amount using given  coins values and successively fill the number of ways to make each value from 1 to amount 

    5.If coins[i-1]<=j then we have two choice we can either include the coins or not include it, we consider both options and add to result

    6.Else if value of coins[i-1] > j( j is the sum to be made) then we can't include this coins value as it value is greater than amount to be made

    7.Finally return the result stored at return dp[n][amount];