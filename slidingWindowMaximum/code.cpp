#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void print(deque<int> q){
        while(!q.empty())
        {
            cout<<q.front()<<" ";
            q.pop_front();
        }
        cout<<endl;
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> dq;
        for(int i=0;i<nums.size();i++){
            if(!dq.empty() && dq.front()==i-k)
                dq.pop_front();
            while(!dq.empty() && nums[dq.back()]<=nums[i])
                dq.pop_back();
            dq.push_back(i);
            if(i>=k-1)
                res.push_back(nums[dq.front()]);
            // print(dq);
        }
        return res;
    }
};