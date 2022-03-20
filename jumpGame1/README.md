Approach1

    1.Using dynamic programming

    2.Initialise a dp array with all values as 0

    3.for every element in array check if it can be reached by jumping from any number previous to it

    4.If it can be reached assign dp[i] to true

    5.Return value stored in dp[n-1] at the end

    6.Time complexity = O(n2) and space complexity = O(n)

Approach2

    1.Greedy approach

    2.Assign goodIndex to n-1 initially

    3.Traverse the array from the end

    4.For every element check if it can help us in reaching the good index if yes then assign goodIndex to current element

    5.Example arr=[2,3,1,1,4] initially goodIndex = 4 since element 1 can help us reach goodIndex(4) assign goodIndex=3

    Similarly for all other elements
