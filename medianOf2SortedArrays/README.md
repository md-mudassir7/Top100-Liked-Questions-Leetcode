Approach

    1.Brute force approach is to use the merge method of merge sort and find the median

    2.Optimal approach is to use binary search

    3.Using binary search we find the current position to partition the array(merged array) into 2 halve such that middle element is the median
    (for odd length) and average of middle 2 values(for even length)

    4.left1 indicates the ending point in the first array that should be considered for left partition and left2 indicates the same for second array

    5.right1 indicates the starting point in the first array that should be considered for right partition and right2 indicates the same for second array

For clear explaination [click here](https://www.youtube.com/watch?v=NTop3VTjmxk)