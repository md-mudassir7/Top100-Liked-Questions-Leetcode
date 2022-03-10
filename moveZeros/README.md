Approach

    1.use 2 pointers left and right

    2.Left stores the index at which a non zero element has to be inserted

    3.Right stores the index of element which is a non zero element and has to be swapped with left


Dry run

    arr = [0,1,0,3,12]

    initially left=0,right=0

    1st iteration
    
        right = 1
    
    2nd iteration

        arr[i]!=0 hence left and right are swapped

        hence arr=[1,0,0,3,12]

        now left=1,right=2;

    3rd iteration

        right++;(right=3)

    4th iteration

        arr[i]!=0 hence left and right are swapped

        hence arr=[1,3,0,0,12]

        now left=2,right=4;

    5th iteration

        arr[i]!=0 hence left and right are swapped

        hence arr=[1,3,12,0,0]

        now left=1,right=5;

        right==arr.size() hence loop breaks