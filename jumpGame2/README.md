Approach

    1.Compare the problem to BFS

    2.We find the maximum reachable index from current interval

    3.Initially our interval has start=0 and end=0


Dry Run

    1.Let nums = [2, 3, 1, 1, 4] 
    
    2.We are initially at position 0. Then we can move at most nums[0] steps from it. 
    
    3.So, after one move, we may reach nums[1] = 3 or nums[2] = 1. So these nodes are reachable in 1 move. 
    
    From these nodes, we can further move to nums[3] = 1 and nums[4] = 4. Now you can see that the target nums[4] = 4 is reachable in 2 moves.

    4.We keep two pointers start and end that record the current range of the starting nodes. 
    
    Each time after we make a move, update start to be end + 1 and end to be the farthest index that can be reached in 1 move from the current [start, end].