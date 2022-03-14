Approach

    1.We use hashmap to calculate our answer by calculating the cumulative sum of elements as we move from left to right

    2.We iterate from left to right with i and keep track of the cumulative sum up to i in curr. 
    
    The hashmap map is such that map[sum] = y ,it means we have seen the cumulative sum sum y times in the cumulative sums on the range [0...i-1]

    3.If curr == k then it's obvious that we've found a subarrary that sums to k (nums[0]...nums[i]) and we can increment count by 1

    4.Otherwise we can look for the existence of sum - k in the map. This represents a cumulative sum on nums[0...j] 
    such that sum(nums[0]...nums[j]) == curr - k. 
    
    If such a j exists, then we have 
        sum(nums[0]...nums[i]) - sum(nums[0]...nums[j]) => curr - (curr - k) => k  =>  sum(nums[j+1]...nums[i])

    5.I.e. we found some subarray that sums to k (specifically the subarray from j+1 to i). We'll add the number of these arrays to the count. Here the important point is that if we subtract the sum of the numbers on [0...j] from the sum of the numbers on [0...i] then we are left with the sum of the numbers on [j+1...i].