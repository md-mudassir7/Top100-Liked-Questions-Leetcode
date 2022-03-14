#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);
        vector<int> suff(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++)
            pre[i]=pre[i-1]*nums[i];
        suff[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
            suff[i]=suff[i+1]*nums[i];
        for(int i=0;i<n;i++)
            cout<<pre[i]<<" ";
        cout<<endl;
        for(int i=0;i<n;i++)
            cout<<suff[i]<<" ";
        cout<<endl;
        vector<int> res(n);
        for(int i=0;i<n;i++)
        {
            if(i==0)
                res[i]=suff[i+1];
            else if(i==n-1)
                res[i]=pre[i-1];
            else
                res[i]=pre[i-1]*suff[i+1];
        }
        return res;
    }
};
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod = 1;
        vector<int> res(n);
        for(int i=0;i<n;i++){
            prod*=nums[i];
            res[i]=prod;
        }
        prod=1;
        for(int i=n-1;i>0;i--){
            res[i]=res[i-1]*prod;
            prod*=nums[i];
        }
        res[0]=prod;
        return res;
    }
};