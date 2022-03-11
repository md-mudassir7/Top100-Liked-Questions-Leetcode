Approach

    1.Sort the intervals

    2.Initialise result and add the first pair of intervals in result

    3.If the ending time of last most interval of result is less than current interval's starting time then they cannot be merged

    simply add the current interval in the result

    4.If it is greater then the ending time of last most interval is the maximum of ending time of last most interval of result and

    ending time of current interval

    5.Return the result