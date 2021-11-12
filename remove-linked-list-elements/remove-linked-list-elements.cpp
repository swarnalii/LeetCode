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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummy = new ListNode(0);
        dummy -> next = head;
        ListNode *prev = dummy, *curr = head;
        while(curr != NULL){
            ListNode *next =  curr->next;
            if(curr->val == val)
                prev->next = next;
            else
                prev = curr;
            curr = curr->next;
        }
        return dummy->next;
        //time complexity is O(n)
        // space complexity is O(1)
    }
};