Approach

    1.We use stack to solve this problem

    2.The stack will store the intermediate and the entire result as well

    3.We find the string between [] and store it in temp in the code and the number preceding the braces example 10[] we store 10 in variable n

    in the code

    4.Then we loop until n and store the string in temp in the stack until n times


Dry Run

    1.let s = "3[a2[c]]"

    2.We keep pushing the elements in the stack until we find a closing brace hence we keep pushing elements until 'c' in the string

    3.Hence stack contains s = {'3','[','a','2','[','c'} at this point we extract the previous string and the number 

    4.That is temp = 'c' and number n = '2' now stack becomes s = {'3','[','a'} 

    5.Now loop n times and push temp in s now stack becomes s = {'3','[','a','c','c'}

    6.Again we get str[i]=']' which is the last character of string

    7.Performing the same we get temp = 'caa' initially as stack stores in LIFO manner reversing it we get temp = 'acc' and number n = '3' and stack

    is s = {}

    8.We push temp n times in stack s = {'a','c','c','a','c','c','a','c','c'}

    9.Once the string is completely traversed we have our answer in the stack so we need to extract it and reverse it then return it