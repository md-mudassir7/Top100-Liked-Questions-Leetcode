Approach

    1.The approach is similar to merging 2 sorted linked lists

    2.Here we take every 2 pairs merge them and store it in a list and then again merge list and the next list in array 

    3.Time complexity is O(n*k) where n is size of linked lists and k is size of vector

    4.Better approach is by dividing the list by 2 everytime until the size of list becomes one and the first element of the lists vector store 
    the answer


Dry Run

    lists = [[1,2,3],[1,4,5],[3,4,5]]

    first merge every 2 elements in array

    lists = [[1,1,2,3,4,5],[3,4,5]] the indices are maintained by the variable cnt in the code

    now merge these 2 again

    lists = [[1,1,2,3,3,4,4,5,5]]

