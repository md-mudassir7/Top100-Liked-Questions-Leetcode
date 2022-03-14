#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> hash(26,0);
        vector<int> phash(26,0);
        vector<int> res;
        int left = 0;
        int right = 0;
        int window = p.size();
        int len = s.size();
        if(len<window)
            return res;
        while(right<window){
            hash[s[right]-'a']++;
            phash[p[right]-'a']++;
            right+=1;
        }
        right-=1;
        while(right<len){
            if(phash==hash)
                res.push_back(left);
            right+=1;
            if(right!=len)
                hash[s[right]-'a']+=1;
            hash[s[left]-'a']-=1;
            left+=1;
        }
        return res;
    }
};