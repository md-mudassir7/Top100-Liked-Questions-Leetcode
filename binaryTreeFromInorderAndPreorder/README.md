Approach

    1.The first element of preorder is the root

    2.We find the index of this element in inorder array ,then everything to left of this index lies in left subtree of root(1st ele of preorder)

    3.Everything to right of this index lies in right subtree of root

    4.To find the index efficiently we use map and store all the elements of inorder array and their indices as key value pair 

    5.Recursively calling the solve function after the index is found using map calling left subarray gives us left subtree

    and right subarray gives right subtree