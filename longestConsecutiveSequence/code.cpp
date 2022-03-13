#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        sort(nums.begin(),nums.end());
        int res = 1;
        int candidate = nums[0];
        int cnt = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])
                continue;
            if(nums[i]==candidate+1)
                cnt++;
            else
            {
                res=max(res,cnt);
                cnt=1;
            }
            candidate=nums[i];
        }
        return max(res,cnt);
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for(auto x : nums)
            s.insert(x);
        int res = 0;
        int cnt = 0;
        for(auto x : s){
            if(s.count(x-1)!=0)
                continue;
            int start = x+1;
            cnt = 1;
            while(s.count(start)>0){
                cnt++;
                start++;
            }
            res=max(res,cnt);
        }
        return max(res,cnt);
    }
};