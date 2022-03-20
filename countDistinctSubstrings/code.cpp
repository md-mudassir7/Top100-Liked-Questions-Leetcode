#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node* links[26];
    bool containsKey(char ch){
        return links[ch-'a']!=NULL;
    }
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }
    Node* get(char ch){
        return links[ch-'a'];
    }
};

int countDistinctSubstrings(string &s)
{
    Node* trie = new Node();
	int res = 0;
    int n = s.size();
    for(int i=0;i<n;i++){
        Node* node = trie;
        for(int j = i;j<n;j++){
            if(!node->containsKey(s[j])){
                node->put(s[j],new Node());
                res++;
        	}
            node = node->get(s[j]);
        }      
    }
    return res+1;
}