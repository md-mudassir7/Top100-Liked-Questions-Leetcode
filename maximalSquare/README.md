Approach

    1.Use dynamic programming as this problem has overlapping subproblems and optimal substructure condition

    2.At any point of time we need to check if the current element is '1' and if it can contribute in making a larger square in the matrix

    3.So we find the minimum length across 3 values (top,left and top-left) corners

    4.We keep track of the largest size found so far and return its area at the end

    5.we need to check in these 3 direction to make our pre exisitng matrix largest 
         \ |
       ___\|