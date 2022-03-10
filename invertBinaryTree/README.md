Approach

    1.base case when root==NULL return NULL

    2.Recursive calls for left and right subtrees

    3.Store the result of recursive call to left subtree in a TreeNode variable left and recursive call to right subtree in a TreeNode variable right

    4.Assign root->left=right(Above variable) and root->right = left

    5.return root
