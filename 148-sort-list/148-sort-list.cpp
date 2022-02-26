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
    ListNode* mergeTwoLists(ListNode* l1,ListNode* l2)
    {
     if(!l1)
          return l2;
     if(!l2)
          return l1;
    if(l1->val<l2->val)
    {
        l1->next=mergeTwoLists(l1->next,l2);
        return l1;
    }
    else
    {
        l2->next=mergeTwoLists(l2->next,l1);
        return l2;
    }
     
    
    }
    ListNode* sortList(ListNode* head) {
        
        if (!head || !head->next)
            return head;
        
       //use merge sort to decrease complexity
        ListNode* temp=NULL ;
        ListNode* slow=head ;
        ListNode* fast=head;
        
        //find the middle of the linked list
        while(fast!=NULL && fast->next!=NULL)
        {
            // if(temp == NULL)
            //     temp = slow;
            // else temp = temp -> next;
            temp = slow;
            slow=slow->next;
            fast=fast->next->next;
            
        }
        temp->next= NULL;
        
        // sort first half
        ListNode* l1= sortList(head);
        ListNode* l2= sortList(slow); //sort second half
        
        return mergeTwoLists(l1,l2);
    }
};