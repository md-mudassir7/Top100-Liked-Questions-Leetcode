Approach1

    1.For every element in the array the answer is the product of all the elements to its left with all the elements to its right

    2.We can store the product of all elements from 1 to n in an array prefix and the product of all elements from n to 1 in an array suffix

    3.Then for every element in the array the answer will be the product of prefix at i-1 and suffix at i+1

    4.This requires use of 2 extra arrays prefix and suffix


Approach2

    1.This approach involves inplace calculation

    2.Instead of using arrays prefix and suffix we can use variables which will store the answer

    3.First we traverse the array from left to right and store the  cumulative product of all elements until i in the result array

    4.Then we again traverse from right to left and update the answer at position i in the array using the value at position i-1 and the product variable


Dry Run Approach2

    1.let arr=[1,2,3,4] res = [dummy,dummy,dummy,dummy]

    2.In the first l->r traversal res becomes res = [1,2,6,24]

    3.Now we have prod = 1 and traverse r->l (until index 1)

    4.res[3]=res[2]*prod and prod = prod*arr[3] hence res = [1,2,6,6] and prod = 4

    5.res[2]=res[1]*prod and prod = prod*arr[2] hence res = [1,2,8,6] and prod = 12

    6.res[1]=res[0]*prod and prod = prod*arr[1] hence res = [1,12,8,6] and prod = 24

    7.At the end res[0]=prod hence res=[24,12,8,6]