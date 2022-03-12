Approach

    1.For every node in tree we have to check if all nodes to left of it are smaller and right of it are larger

    2.To perform the above task we should calculate maximum of left subtree and check if it is smaller that root value
    
    then minimum of right subtree and check if it is larger that root value

    3.Instead of calculating min and max for every node we can set an interval in which the node should lie

    4.We initialise the interval with [INT_MIN,INT_MAX]

    5.For left subtree we update interval to [INT_MIN,root->val] to make sure that every node in left subtree is smaller that root->val

    6.For right subtree we update interval to [root->val,INT_MAX] to make sure that every node in right subtree is larger that root->val

    
The image attached gives more details the intervals beside every node is the interval in which node should lie