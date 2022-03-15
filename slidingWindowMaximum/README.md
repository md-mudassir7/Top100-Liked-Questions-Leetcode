Approach

    1.Deque is used to store the elements of the window at any time

    2.Most important thing is that deque stores the elements in such a way that the front of queue is always the maximum

    3.If we get any number greater than front of the queue we pop all the elements and store only the greater elements in the queue

    4.We store the indices of the numbers in the deque


Dry Run

    nums = [1,3,-1,-3,5,3,6,7] and k = 3

    1st itertaion : dq = [0] ; deque is empty

    2nd iteration : dq = [1] ; 3 is greater than 1 hence index of 3 is stored in the front(=1)

    3rd iteration : dq = [1,2] ; -1 is less than 3 so we store its index after index of 3

    4th iteration : dq = [1,2,3]; -3 is also less than 3

    5th iteration : dq = [4] ; now element is 5 which is greater than the front of deque hence we pop all the elements and store just the index of number 5 which is 4

    6th iteration : dq = [4,5]; 3 is less than 5 so we store its index after index of 5

    7th iteration : dq = [6] ; now element is 6 which is greater than the front of deque hence we pop all the elements and store just the index of number 6 which is 6

    8th iteration : dq = [7] ; now element is 7 which is greater than the front of deque hence we pop all the elements and store just the index of number 7 which is 7