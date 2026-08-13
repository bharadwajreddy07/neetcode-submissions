/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* rever(ListNode *head)
    {
        ListNode *temp=head;
        ListNode* prev=nullptr;
        ListNode* curr=nullptr;
        while(temp)
        {
            curr=temp->next;
            temp->next=prev;
            prev=temp;
            temp=curr;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
       ListNode* sp=head;
       ListNode* fp=head;
       while(fp!=nullptr&&fp->next!=nullptr)
       {
        sp=sp->next;
        fp=fp->next->next;
       }
       ListNode* temp=sp->next;
       sp->next=nullptr;
       temp=rever(temp);
        ListNode* f=head;
       while(temp!=nullptr)
       {
        ListNode* fn=f->next;
        ListNode* tn=temp->next;
        f->next=temp;
        temp->next=fn;
        f=fn;
        temp=tn;
       }
    }
};
