Approach

    1.Use recursion

    2.Handle base cases

        2.1 If our target becomes zero at any point, then we have found a possible combination include that combination in our answer
        
        2.2 If at any point target becomes less than zero, then return 

        2.3 If index crosses the last index, we will return saying that no more element is left to choosee
    
    3.As we know for every element we have two choices whether to include in our answer or not  

    4.If we are not taking the ith element then without decreasing sum we will move to next index because it will not contribute in making our sum

    5.If we are taking the ith element then we are not moving onto the next element because it may be possible that this element again contribute in making our sum.
    
    but we decrease our target sum as we are consediring that this will help us in making our target sum