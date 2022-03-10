Approach

    1.Use deque

    2.Keep adding characters to deque 

    3.If there already exists a character in deque then update ans to maximum of ans and size of deque and keep

    popping front of queue until the front is not equal to current character

    4.pop the front again and push the current character

    5.Again update ans to maximum of ans and size of deque after the loop

    6.return the ans

Intuition

    At any point of time the queue contains all distinct characters, if there exists a character in the queue which is equal

    to the current character in the string then perform step 3,4 of approach