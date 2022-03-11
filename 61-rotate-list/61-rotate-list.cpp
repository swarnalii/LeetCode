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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL)
            return head;
        
        int n = 1;
        ListNode* tail = head;
        
        while(tail -> next != NULL){
            tail = tail -> next;
            n++;
        }
        
        tail -> next = head;
        int start = n - (k%n);
 
        while(start--){
            tail = tail -> next;
        }
        
        head = tail -> next;
        tail -> next = NULL;
        
        return head;
    }
};