Approach

    1.Use depth first search

    2.If we get any element of matrix as '1' we call dfs from that row and column

    3.During dfs we explore all the possible 4 directions and to mark the current cell as visited we make grid[i][j]='0'

    4.The answer is going to be the number of dfs calls we make