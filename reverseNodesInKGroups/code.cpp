#include<bits/stdc++.h>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* reverse(ListNode* head,ListNode* temp){
        ListNode* nxt = new ListNode();
        ListNode* prev = NULL;
        while(head!=NULL && head!=temp){
            nxt = head->next;
            head->next = prev;
            prev = head;
            head = nxt;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len = 0;
        ListNode* end = head;
        while(end){
            len++;
            end=end->next;
        }
        len/=k;
        ListNode* dummy = new ListNode(0);
        ListNode* start = dummy;
        end = head;
        for(int i=0;i<len;i++){
            int j = k;
            while(j--){
                end=end->next;
            }
            start->next = reverse(head,end);
            head->next = end;
            start = head;
            head=end;
        }
        return dummy->next;
    }
};