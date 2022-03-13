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
    ListNode* findMid(ListNode* head){
        if(head==NULL || head->next==NULL) 
            return head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* merge(ListNode* left,ListNode* right){
        if(!left)
            return right;
        if(!right)
            return left;
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        while(left && right){
            if(left->val<right->val){
                temp->next = new ListNode(left->val);
                temp = temp->next;
                left=left->next;
            }
            else
            {
                temp->next = new ListNode(right->val);
                temp = temp->next;
                right=right->next;
            }
        }
        if(left)
            temp->next=left;
        if(right)
            temp->next=right;
        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        if(!head or !head->next)
            return head;
        ListNode* mid = findMid(head);
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = NULL;
        left=sortList(left);
        right=sortList(right);
        ListNode* result = merge(left,right);
        return result;
    }
};