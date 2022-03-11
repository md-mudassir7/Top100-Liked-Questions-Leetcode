Approach

    1.In reverse order, find the first number which is in increasing trend (we call it violated number here)

    2.If array is [1,7,2,3,9] here the element is 9

    3.Reverse all the numbers after violated number

    4.If violated number not found, because we have reversed the whole array, then we are done!

    5.Else binary search find the first number larger than the violated number and swap them