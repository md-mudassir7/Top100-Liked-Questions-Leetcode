#include<bits/stdc++.h>
using namespace std;class Solution {
public:
    int maxArea(vector<int>& arr) {
        int l = 0;
        int r = arr.size()-1;
        int ans = 0;
        while(l<r){
            int ht = min(arr[l],arr[r]);
            int width = (r-l);
            int currAmount = ht*width;
            ans=max(currAmount,ans);
            if(arr[l]<arr[r])
                l++;
            else if(arr[l]>arr[r])
                r--;
            else
            {
                l++;
                r--;
            }
        }
        return ans;
    }
};