Approach

    1.Using backtracking we calculate all possible strings by traversing in all 4 directions

    2.Using 2 for loops we traverse the board and check if the char at particular (r,c) is equal to first character of word

    3.Once it is found we run dfs call starting from that point to find all possible strings

    4.In recursion we perform following steps

        *Base case : check if all the alphabets in the word is checked (return true)

        *check if r and c are out of bound or if the characters aren't equal then return false

        *mark the current (r,c) as visited(board[r][c] = '0') then traverse in all 4 directions

        *change the character back for other searches (board[r][c] = word[index])

        *return the status of traversals in all 4 directions