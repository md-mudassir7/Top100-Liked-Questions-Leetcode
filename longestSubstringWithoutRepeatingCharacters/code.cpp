#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
            return 0;
        deque<char> q;
        int res = 1;
        for(int i=0;i<s.size();i++){
            deque<char>::iterator it = find(q.begin(),q.end(),s[i]);
            if(it==q.end())
                q.push_back(s[i]);
            else
            {
                if(q.size()>res)
                    res = q.size();
                while(q.front()!=s[i])
                    q.pop_front();
                q.pop_front();
                q.push_back(s[i]);
            }
        }
        if(q.size()>res)
            res=q.size();
        return res;
    }
};