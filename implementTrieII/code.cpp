#include<bits/stdc++.h>
using namespace std;
struct Node
{
    Node* links[26];
    int cntEndWith = 0;
    int cntPrefix = 0;
    bool containsKey(char ch){
        return links[ch-'a']!=NULL;
    }
    Node* get(char ch){
        return links[ch-'a'];
    }
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }
    void incrementEnd(){
        cntEndWith++; 
    }
    void incrementPrefix(){
        cntPrefix++;
    }
    void deleteEnd(){
        cntEndWith--;
    }
    void reducePrefix() {
        cntPrefix--; 
    }
    int getEnd(){
        return cntEndWith;
    }
    int getPrefix(){
        return cntPrefix;
    }
};
class Trie{
	private:
    Node* root;
    public:

    Trie(){
        root = new Node();
    }

    void insert(string &word){
        Node* temp  = root;
        for(int i=0;i<word.size();i++){
            if(!temp->containsKey(word[i])){
                temp->put(word[i],new Node());
            }
            temp = temp->get(word[i]);
            temp->incrementPrefix();
        }
        temp->incrementEnd();
    }

    int countWordsEqualTo(string &word){
        Node* temp = root;
        for(int i=0;i<word.size();i++){
            if(!temp->containsKey(word[i]))
                return 0;
            temp = temp->get(word[i]);
        }
        return temp->getEnd();
    }

    int countWordsStartingWith(string &word){
       Node* temp = root;
        for(int i=0;i<word.size();i++){
            if(!temp->containsKey(word[i]))
                return 0;
            temp = temp->get(word[i]);
        }
        return temp->getPrefix();
    }

    void erase(string &word){
    	Node* temp = root;
        for(int i=0;i<word.size();i++){
            if(!temp->containsKey(word[i]))
                return ;
            temp = temp->get(word[i]);
            temp->reducePrefix();
        }
        temp->deleteEnd(); 
    }
};
