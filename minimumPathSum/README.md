Approach

    1.Initialise a 2d matrix of size mxn

    2.(i,j)th block in matrix stores the minimum path sum from (0,0) to (i,j)

    3.To reach (i,j) there are 2 ways i.e (i-1,j) and (i,j-1) 

    4.Value of (i,j) is equal to minimum path sum of (i-1,j) and (i,j-1) added with grid value at (i,j) 

    i.e dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];

    4.Return the value stored at (m,n)th block