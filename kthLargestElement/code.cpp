#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(auto x : nums){
            pq.push(-1*x);
            if(pq.size()>k)
                pq.pop();
        }
        return -1*pq.top();
    }
};