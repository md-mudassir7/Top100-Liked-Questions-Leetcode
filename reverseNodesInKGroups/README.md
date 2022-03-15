Approach

    1.Here we apply the logic of reversing a linked list

    2.We extract every group of k nodes using 2 variables start(pointing to the start) and end(pointing to the end) 

    3.Then we reverse the sublist between nodes start and end

    4.Line 40 in the code makes sure that we are linking the reversed linked lists again 

    i.e l = [1,2,3,4,5] and k = 2 lets say we have reversed first 2 elements so l = [2,1] in order to link 1 with 3 we perform head->next = end 

    so that now l becomes l = [2,1,3,4,5]
    