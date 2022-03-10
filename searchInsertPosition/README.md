Approach

    1.Use binary search 

    2.left=0,right=n-1

    3.calculate mid and if nums[mid]==target return mid

    4.else update left and right accordingly

    5.At last the value stored at right+1 will be the result


Dry run

    nums=[1,2,4,5],target = 3

    left = 0,right = 3

    1st iteration

        left = 0,right =3

        mid = 1 and nums[1]=2 which is <3 hence left=mid+1(left=2)

    2nd iteration

        left = 2,right = 3

        mid  = 2 and nums[2]=4 which is >3 hence right=mid-1(right=1)

        at this point right<left hence loop breaks and right+1(=2) will be returned and which is correct 

        3 has to be inserted at position 2
        