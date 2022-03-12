#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word,int r,int c,int index){
        if(index==word.size())
            return true;
        if(r<0 or c<0 or r>=board.size() or c>=board[0].size() or board[r][c]!=word[index])
            return false;
        board[r][c]='0';
        bool temp = dfs(board,word,r+1,c,index+1) or dfs(board,word,r-1,c,index+1) or dfs(board,word,r,c+1,index+1) or dfs(board,word,r,c-1,index+1) ;
        board[r][c]=word[index];
        return temp;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0] && dfs(board,word,i,j,0))
                    return true;
            }
        }
        return false;
    }
};