#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 1, k = i;
        while (i > 0 && nums[i-1] >= nums[i])
            i--;
        for (int j=i; j<k; j++, k--)
            swap(nums[j], nums[k]);
        cout<<i<<" "<<k<<endl;
        if (i > 0) {
            k = i;
            i--;
            cout<<i<<" "<<k<<endl;
            while (nums[k] <= nums[i])
                k++;
            swap(nums[i], nums[k]);
        }
    }

};