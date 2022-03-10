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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = 1;
        ListNode* temp = head;
        while(temp->next)
        {
            l++;
            temp=temp->next;
        }
        cout<<l<<" "<<n<<endl;
        n = l-n;
        if(n==0)
            return head->next;
        n--;
        cout<<n<<endl;
        temp=head;
        while(n!=0)
        {
            n--;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};