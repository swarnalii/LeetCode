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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* p= head;
        ListNode* temp1=head;
        ListNode* second= NULL;
        k--;
        while(k != 0)
        {   
            p=p->next;
            k--;   
        }
        second=p;
        while(p->next!=NULL)
        {
            p=p->next;
            temp1=temp1->next;
        }
        swap(temp1 -> val, second -> val);
        int temp;
        // temp=second->val;
        // second->val=temp1->val;
        // temp1->val=temp;
        
        return head;
    }
};