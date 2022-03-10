Use binary search 

1.Initialise left=0 and right=sizeOfArray-1

2.In binary search calculate the currArea using values at left and right

3.currArea = min(nums[left],nums[right])*(right-left)

4.If nums[left]>nums[right] then right--

5.If nums[left]< nums[right] the left++

6.If nums[left] = nums[right] then right-- & left++