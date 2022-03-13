#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& arr) {
        vector<int> adj[n];
        vector<int> indegree(n,0);
        for(int i=0;i<arr.size();i++){
            indegree[arr[i][1]]++;
            adj[arr[i][0]].push_back(arr[i][1]);
        }
        vector<int> res;
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        int temp = 0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            temp++;
            res.push_back(node);
            for(auto x : adj[node]){
                indegree[x]--;
                if(indegree[x]==0)
                    q.push(x);
            }
        }
        if(temp==n){
            reverse(res.begin(),res.end());
            return res;
        }
        else
            return {};
    }
};