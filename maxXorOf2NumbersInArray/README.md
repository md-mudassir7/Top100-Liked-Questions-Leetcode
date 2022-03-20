Pre-requisites

    1.Bit manipulation

    2.To check if the ith bit is set or not in a number (num) we do (num>>i)&1
    i.e we right shift num by i and then perform & with 1 to check if it is set or not

    3.To turn on ith bit in a number(num) we do (1<<i)|1 
    i.e we left shift 1 by i to make sure that bit 1 is in the ith position and then perform | with 1 to set the ith bit

Bit manipulation [link](https://www.youtube.com/watch?v=5iyuU4hQFrw&list=PLgUwDviBIf0pcIDCZnxhv0LkHf5KzG9zp&index=5)

Approach

    1.In this problem we store the binary form of the number in a trie 

    2.First we store all the numbers of the array in the trie and then traverse the array again and find the element in the trie which gives the xor as maximum

    3.At the end we return the result


For clear understanding click [here](https://www.youtube.com/watch?v=EIhAwfHubE8&list=PLgUwDviBIf0pcIDCZnxhv0LkHf5KzG9zp&index=6)