#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node* links[26];
    bool isLeaf = false;
    bool containsKey(char ch){
        return links[ch-'a']!=NULL;
    }
    Node* get(char ch){
        return links[ch-'a'];
    }
    void put(char ch, Node* node){
        links[ch-'a']=node;
    }
    void setEnd(){
        isLeaf = true;
    }
    bool isEnd(){
        return isLeaf;
    }
};
class Trie{
private:
	Node* root;	    
public:
    Trie(){
        root = new Node();
    }
    void insert(string word){
        Node* temp  = root;
        for(int i=0;i<word.size();i++){
            if(!temp->containsKey(word[i])){
                temp->put(word[i],new Node());
            }
            temp = temp->get(word[i]);
        }
        temp->setEnd();
    }
    bool allPrefixesExist(string word){
        Node* temp  = root;
        bool flag = true;
        for(int i=0;i<word.size();i++){
            if(!temp->containsKey(word[i])){
                return false;
            }
            else
            {
                temp = temp->get(word[i]);
                flag = flag&temp->isEnd();
        	}
        }
        return flag;
    }
};
string completeString(int n, vector<string> &a){
    Trie* trie = new Trie();
    for(int i=0;i<n;i++){
        trie->insert(a[i]);
    }
    string ans = "";
    for(int i=0;i<n;i++){
        if(trie->allPrefixesExist(a[i])){
            if(a[i].size() > ans.size()) {
                ans = a[i]; 
            }
            else if(a[i].size() == ans.size() && a[i] < ans) {
                ans = a[i]; 
            }
        }
    }
    if(ans == "")
        return "None";
    return ans;
}