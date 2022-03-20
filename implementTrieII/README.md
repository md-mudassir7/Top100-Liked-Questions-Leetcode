Approach

    1.Insert function inserts a new string in the trie

    2.let word = "apple" we check if root of trie has 'a' if not we create a new node similarly for 'pple'

    3.If next word is 'appx' we check the same and we have 'a' existing similarly 'p' and 'p' existing next node is 'l' hence we create a new node with value 'x' and mark it as the end of trie 

    4.The function countWordsEqualTo counts the number of words which are equal to the given word

    5.The function countWordsStartingWith counts the number of words which have the prefix equal to the given word

    6.The function erase deletes the given word from the trie

    7.Variables cntEndWith and cntPrefix are declared in the structure to make above three functions easy

For more understanding click [here](https://www.youtube.com/watch?v=K5pcpkEMCN0&list=PLgUwDviBIf0pcIDCZnxhv0LkHf5KzG9zp&index=3)