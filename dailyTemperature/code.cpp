#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        stack<int> s;
        int n = arr.size();
        vector<int> res(n,0);
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && arr[s.top()]<=arr[i])
                s.pop();
            if(s.empty())
                res[i]=0;
            else
                res[i]=s.top()-i;
            s.push(i);
        }
        return res;
    }
};