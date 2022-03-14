#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i = 0;
        int j = n-1;
        if(target<matrix[0][0] or target>matrix[m-1][n-1])
            return false;
        while(i<m and j>=0){
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]<target)
                i++;
            else
                j--;
        }
        return false;
    }
};