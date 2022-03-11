#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int start = 0;
        int end = 0;
        int res = 0;
        while(end<nums.size()-1){
            res++;
            int max_reach = end+1;
            for(int i=start;i<=end;i++){
                max_reach=max(max_reach,i+nums[i]);
            }
            start=end+1;
            end=max_reach;
        }
        return res;
    }
};