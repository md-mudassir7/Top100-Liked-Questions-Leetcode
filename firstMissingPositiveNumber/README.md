Approach

    1.We use indexing to solve this problem

    2.we ignore all the elements which are <=0 in the array by making their value  = INT_MAX

    3.We find the absolute value of the current element and subtract 1 from it to get the index

    4.If the index is >=0 and <n and the number at that index is not negative then we negate it inorder to indicate that this number exists in array

    5.At the end if any number in the array is >0 it means we did not find the potential number in step 4 to negate it and hence return current index(i) +1 as indexing starts from 0

    6.If we do not get any element which is >0 in step 5 that means all the numbers are present in array and we return n+1 as it is the first missing postitive number


Dry Run

    1.arr = [1,1,2]

    iteration1 : index = 0(1-1) and arr[0]>1 hence we negate it and array becomes arr = [-1,1,2]

    iteration2 : index = 0(1-1) and arr[0]<0 hence we dont do anything

    iteration3 : index = 1(2-1) and arr[1]>0 hence we negate it and array becomes arr = [-1,-1,2]

    now when we loop again we find that arr[2]>0 hence it means that i+1 = (2+1) did not appear in the array and we return 3