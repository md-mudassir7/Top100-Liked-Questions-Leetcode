#include<bits/stdc++.h>
using namespace std;
struct Node{
  Node* links[2];
  bool containsKey(int bit){
      return links[bit]!=NULL;
  }
  void add(int bit,Node* node){
      links[bit]=node;
  }
  Node* get(int bit){
      return links[bit];
  }
};
class Trie{
private:
    Node* root;
public:
    Trie(){
        root = new Node();
    }
    void insert(int num){
        Node* temp = root;
        for(int i=31;i>=0;i--){
            int bit = (num>>i)&1;
            if(!temp->containsKey(bit))
            {
                temp->add(bit,new Node());
            }
            temp = temp->get(bit);
        }
    }
    int getMax(int num){
        Node* temp = root;
        int res = 0;
        for(int i=31;i>=0;i--){
            int bit = (num>>i)&1;
            if(temp->containsKey(1-bit)){
                temp = temp->get(1-bit);
                res = res | (1<<i);
            }
            else
                temp = temp->get(bit);
        }
        return res;
    }
};
class Solution {
public:
    int findMaximumXOR(vector<int>& arr) {
        int n = arr.size();
        Trie* trie = new Trie();
        for(int i=0;i<n;i++){
            trie->insert(arr[i]);
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,trie->getMax(arr[i]));
        }
        return ans;
    }
};