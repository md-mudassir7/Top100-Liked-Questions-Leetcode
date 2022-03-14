Approach

    1.Greedy approach is required to solve this problem 

    2.We store the last occurence of every character in the string in an map named last_occurence

    3.Then we traverse the string and calculate the last character of current letter in the string meaning

    that if we are including the current element in our partition we should extend it until the last_occurence of that element atleast

    4.start and end keep track of the start and end of the partition

    5.end is going to store the last_occurence of all the elements in the partition and when index i becomes end we are at the end of partition

    hence we add the size of partition(end-start+1) to our result and update start to start = end+1

Dry Run
    
    1.s = "abcbadefge"

    2.last_occurence = [{'a',4},{'b',3},{'c',2},{'d',5},{'e',9},{'f',7},{'g',8}]

    3.We traverse the string letter by letter now 

    start = 0, end = 0

    1st iterration :  end = max(end,last_occurence['a']) = max(0,4) = 4 hence end = 4 ,i = 0 hence i!=end

    2nd iterration :  end = max(end,last_occurence['b']) = max(4,3) = 4 hence end = 4 ,i = 1 hence i!=end

    3rd iterration :  end = max(end,last_occurence['c']) = max(4,2) = 4 hence end = 4 ,i = 2 hence i!=end

    4th iterration :  end = max(end,last_occurence['b']) = max(4,3) = 4 hence end = 4 ,i = 3 hence i!=end

    5th iterration :  end = max(end,last_occurence['a']) = max(4,4) = 4 hence end = 4 ,i = 4 and now i==end

    which means that this is the end of our partition which is correct('abcda' should lie in one partiotion) hence we add the length to our 
    
    result

    6th iterration :  end = max(end,last_occurence['d']) = max(4,5) = 5 hence end = 5 ,i = 5 hence i!=end

    7th iterration :  end = max(end,last_occurence['e']) = max(4,9) = 9 hence end = 9 ,i = 6 hence i!=end

    8th iterration :  end = max(end,last_occurence['f']) = max(9,7) = 9 hence end = 9 ,i = 7 hence i!=end

    9th iterration :  end = max(end,last_occurence['g']) = max(9,8) = 9 hence end = 9 ,i = 8 hence i!=end

    10th iterration : end = max(end,last_occurence['e']) = max(9,9) = 9 hence end = 9 ,i = 9 and now i==end

    which means that this is the end of our partition which is correct('defge' should lie in one partiotion) hence we add the length to our 
    
    result
