#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]=i;
        vector<int> res(2,-1);
        for(int i=0;i<nums.size();i++){
            int remaining = target - nums[i];
            if(mp.find(remaining)!=mp.end()){
                if(mp[remaining]!=i){
                    res[0]=i;
                    res[1]=mp[remaining];
                }
            }
        }
        return res;
    }
};