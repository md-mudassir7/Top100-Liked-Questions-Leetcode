Approach

    1.Similar to pathSum 1 and 2

    2.Instead of finding the path from root we call the function pathExists from every node that we visit using inorder traversal

    3.If at any point the sum becomes 0 we increment the result and return it at the end