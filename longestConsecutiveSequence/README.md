Approach1

    1.Sort the array 

    2.Keep counting the elements until they form a consecutive sequence 

    3.Update the answer everytime the consecutiveness of sequence is broken

    4.Time complexity O(n*logn) because of sorting


Approach2

    1.Use set

    2.Insert all the elements of array in set(set stores them in increasing order)

    3.Traverse the set and check if the current element is the start of our sequence using this condition (if(s.count(x-1)!=0))

    4.If above condition is false then the current element is the start of our sequence

    5.Find all the elements that are consecutive in this sequence Line 38-43 does this task for us

    6.Update the result variable everytime a new sequence is formed