Approach

    1.The problem is similar to subset sum problem, here we are trying to minimise the difference between 2 subsets

    2.If s1 is the sum of first subset then sum-s1 will be the sum of other subset their differece which is (sum-s1-s1 => sum-2*s1) is what we are trying to minimise

    3.From the above expression we can conclude that s1 can range upto sum/2 since (sum-2*sum/2) is 0

    4.hence we try to check which sum less ranging (sum/2 -> 0) will give us the minimum difference

    5.The code gives better understanding (lines 23-26) 