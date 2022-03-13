Approach

    1.Use recursion

    2.We recursively call the left and right subtrees of a node

    3.If at any point we get root->val equal to value of either of first or second node we return the root

    4.If we dont get any or if the root reaches NULL we return NULL

    5.The answer is collective decision based on whatever is returned from the left and right subtrees(lines 21-23 in the code)


[!](sample.png)