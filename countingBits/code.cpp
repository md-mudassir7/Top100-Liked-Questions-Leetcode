#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1);
        res[0]=0;
        int temp=1;
        for(int i=1;i<=n;i++)
        {
            if(i==temp*2)
                temp*=2;
            res[i]=res[i-temp]+1;
        }
        return res;
    }
};