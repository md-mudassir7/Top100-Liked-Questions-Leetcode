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
    ListNode* swapPairs(ListNode* head) {
        if(!head or !head->next)
            return head;
        ListNode* dummy = new ListNode();
        ListNode* pre = dummy;
        ListNode* curr = head;
        while(curr && curr->next){
            pre->next=curr->next;
            curr->next=pre->next->next;
            pre->next->next=curr;
            pre=curr;
            curr=curr->next;
        }
        return dummy->next;
    }
};