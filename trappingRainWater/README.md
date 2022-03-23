Approach

    1.At any index the block at current index can only hold water when there is any block to its left and right which has more height than current block

    2.Use 2 auxillary arrays left and right that store the left max of every element and right max of every element in array

    3.Then for every index the amount of water that can be stored is minimum of its left and right max minus the height of current block

For more understandin click [here](https://www.youtube.com/watch?v=UZG3-vZlFM4)