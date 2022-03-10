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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = new ListNode();
        ListNode* temp2 = temp1;
        while(l1!=NULL and l2!=NULL)
        {
            if(l1->val>=l2->val)
            {
                temp2->next=l2;
                l2=l2->next;
            }
            else
            {
                temp2->next=l1;
                l1=l1->next;
            }
            temp2=temp2->next;
        }
        if(l1)
            temp2->next=l1;
        if(l2)
            temp2->next=l2;
        return temp1->next;
    }
};