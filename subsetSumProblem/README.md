Approach

    1.Create a dp matrix of size (n+1)*(m+1) where n is length of array and m is the sum which has to be found

    2.At any point (i,j) dp[i][j] denotes if there is any subset in the array till position i which has sum equal to j

    3.To calculate dp[i][j] we have 2 choices either we can include the current element or exclude it

    4.To include the element we check if its value is less than the target and then we can store the or result of including and excluding it

    5.If the value is greater than the target then we must have to exclude it since adding it to our answer wont be of any use  

    6.At the end return the value stored at dp[n]][m]