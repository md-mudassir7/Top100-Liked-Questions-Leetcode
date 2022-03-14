#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mp;
        int res = 0;
        int curr = 0;
        for(int i=0;i<nums.size();i++){
            curr+=nums[i];
            if(curr==k)
                res++;
            if(mp.find(curr-k)!=mp.end()){
                res+=mp[curr-k];
            }
            mp[curr]++;
        }
        return res;
    }
};