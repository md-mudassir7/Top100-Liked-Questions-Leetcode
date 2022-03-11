#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& arr) {
        int l=0;
        int m=0;
        int r = arr.size()-1;
        while(m<=r){
            if(arr[m]==0){
                swap(arr[l],arr[m]);
                l++;
                m++;
            }
            else if(arr[m]==1)
                m++;
            else
            {
                swap(arr[m],arr[r]);
                r--;
            }
        }
    }
};