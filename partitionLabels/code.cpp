#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        if(n==0)
            return {};
        map<char,int> last_occurence;
        for(int i=0;i<n;i++)
            last_occurence[s[i]]=i;
        int start = 0;
        int end = 0;
        vector<int> res;
        for(int i=0;i<n;i++){
            end = max(end,last_occurence[s[i]]);
            if(i==end){
                res.push_back(end-start+1);
                start = end+1;
            }
        }
        return res;
            
    }
};