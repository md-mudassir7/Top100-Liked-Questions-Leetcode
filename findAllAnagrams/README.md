Brute force

    1.We can traverse the string s from 0 to s.size()-p.size() and at every index we can calculate the substring of length p.size()

    starting from that index and check if that substring and p are anagrams 

    2.If yes we add that index to our result and return the resultanat vector at the end


Optimal

    1.Here we can optimise the process of checking if 2 strings are anagrams in O(1) time using 2 vectors hash and phash of size 26

    2.phash contains the frequency of all the elements of string p

    3.hash contains the frequency of all the elements of window in string s of size  p.size()

    4.Hence to check if 2 strings are anagrams we just check if hash is equal to phash if yes then they are anagrams

    5.Left and right pointers keep track of the start and end position of our window


[!Click here for better understanding](https://www.youtube.com/watch?v=fYgU6Bi2fRg)