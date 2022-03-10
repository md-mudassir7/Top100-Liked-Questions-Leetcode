1.Sort the array
2.If the current number is>0 break (Since we should find trios with sum=0 and any number after this is a positive so they dont contribue)
3.If the current number is same as previous continue(Since we are required to find duplicate numbers)
4.Else consider the current number and initialise 2 pointers(left=currIndex+1,right=sizeOfArray-1)
5.Use binary search with left and right pointers to count the pairs which when added with current number gives sum=0
6.push the trio in result
7.Once left and right pointers are found(i.e nums[curr]+nums[l]+nums[r]=0) 
    then make sure there are no other numbers in nums equal to nums[l] and nums[r]