#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==1)
            return intervals;
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        int n = intervals.size();
        int j = 0;
        for(int i=1;i<n;i++){
            if(intervals[i][0]>res[j][1]){
                res.push_back(intervals[i]);
                j++;
            }
            else
            {
                res[j][1]=max(res[j][1],intervals[i][1]);
            }
        }
        return res;
    }
};