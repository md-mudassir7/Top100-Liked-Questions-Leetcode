#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty())
            return {};
        map<char,string> mp = {{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
        vector<string> res;
        int n = digits.size();
        res.push_back("");
        for(int i=0;i<n;i++){
            if(digits[i]<'2' or digits[i]>'9')
                continue;
            string curr = mp[digits[i]];
            vector<string> temp;
            for(int j=0;j<curr.size();j++){
                for(int k=0;k<res.size();k++){
                    temp.push_back(res[k]+curr[j]);
                }
            }
            res=temp;
            temp.clear();
        }
        return res;
    }
};