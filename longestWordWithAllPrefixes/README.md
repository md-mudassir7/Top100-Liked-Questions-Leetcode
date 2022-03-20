Problem [link](https://www.codingninjas.com/codestudio/problems/complete-string_2687860)

Approach

    1.We store all the words in a trie 

    2.Then we traverse the array and check if all of its prefixes exist in the trie 

    3.If they exist then we update ans according to the lengths of the words

    4.To check if all the prefixes of a word exist we loop through the word and if the charcter is not in trie we return false

    5.Else we check if the character is the end of a string ex for word "ninja" we check if "n" exists and n is the end of a string similarly

    "ni" exists and "ni" is the end of a string similarly for "nin" ,"ninj" and "ninja"