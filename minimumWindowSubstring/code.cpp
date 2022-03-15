#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int> mpt;
        map<char,int> mps;
        for(int i=0;i<t.size();i++)
            mpt[t[i]]++;
        int matchCount = 0;
        int desiredMatchCount = t.size();
        int i = -1;
        int j = -1;
        int n = s.size();
        int k = 0;
        string res = "";
        while(k<n){
            while(i<n-1 && matchCount!=desiredMatchCount){
                i++;
                mps[s[i]]++;
                if(mps[s[i]]<=mpt[s[i]])
                    matchCount++;
            }
            while(j<i && matchCount==desiredMatchCount){
                j++;
                string temp = s.substr(j,i-j+1);
                if(res.size()==0 or temp.size()<res.size()){
                    res = temp;
                }
                if(mps[s[j]]==1)
                    mps.erase(s[j]);
                else
                    mps[s[j]]--;
                if(mps[s[j]]<mpt[s[j]])
                    matchCount--;
            }
            k++;
        }
        return res;
    }
};