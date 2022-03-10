Brute force

    1.Inorder traversal to visit every node

    2.At every node calculate height of its left and right subtree

    3.Update res as max of res and sum of heights of left and right subtree of curr node

    4.return res after inorder traversal


Optimised

    1.How about calculating both our ans and height in a single traversal

    2.Using pair of integers would do the above task

    3.1st element of pair holds our answer and 2nd element of pair holds the height of subtree at current node

    4.At the end return the first element of pair

    5.Base case when root==NULL return pair(0,0)

    6.How to calculate first and second of pair?

    7.first element of pair is maximum of 3 values
    
    8.((height of leftSubtree + height of rightSubtree)(variable c in code),(ans of leftSubtree)(variable a),(ans of rightSubtree)(variable b))

    9.second element of pair is just the maximum of height of leftSubtree and rightSubtree