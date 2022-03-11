Approach

    1.Initialise 2 variables max_so_far and min_so_far to nums[0];

    2.If we get any negative value then we swap max_so_far and min_so_far

    The reason is lets say max_so_far = 4 and min_so_far = 2 at some point if current value is -2(nums[i]=-2) then multiplying it with

    max_so_far gives max_so_far = -8 and min_so_far = -4 which is false hence we swap before multiplying

    3.Update the result to maximum of result and max_so_far