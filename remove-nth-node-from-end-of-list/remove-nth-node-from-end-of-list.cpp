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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head;
        ListNode *dummy = new ListNode(0);
        dummy -> next = head;
        int len = 0;
        while(temp != NULL){
            len++;
            temp = temp -> next;
        }
        if(len == n)
            return head->next;
        int m = len - n;
        for(int i=0;i<m-1;i++){
            head = head->next;
        }
        head->next = head->next->next;
        return dummy->next;
    }
};